jQuery(document).ready(function () {

	// Do our DOM lookups beforehand
	var nav_container = jQuery("#sticky-menu");
	var nav = jQuery("#main-menu");
	
	var top_spacing = 0;
	var waypoint_offset = 50;

	nav_container.waypoint({
		handler: function(event, direction) {
			
			if (direction == 'down') {
			
				nav_container.css({ 'height':nav.outerHeight() });		
				nav.stop().addClass("sticky").css("top",-nav.outerHeight()).animate({"top":top_spacing});
				
			} else {
			
				nav_container.css({ 'height':'auto' });
				nav.stop().removeClass("sticky").css("top",nav.outerHeight()+waypoint_offset).animate({"top":""});
				
			}
			
		},
		offset: function() {
			return -nav.outerHeight()-waypoint_offset;
		}
	});
	
	var sections = jQuery("section");
	var navigation_links = jQuery("#main-menu a");
	var navigation_links_li = jQuery("#main-menu li");
	sections.waypoint({
		handler: function(event, direction) {
		
			var active_section;
			active_section = $(this);
			if (direction === "up") active_section = active_section.prev();

			var active_link = $('#main-menu a[href="#' + active_section.attr("id") + '"]');
			navigation_links_li.removeClass("selected");
			active_link.parent().addClass("selected");

		},
		offset: '25%'
	})
	
	
});
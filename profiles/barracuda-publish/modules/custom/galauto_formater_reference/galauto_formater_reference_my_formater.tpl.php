<div class="complectation-title">
	<table class="complectation-table">
		<tbody>
			<?php foreach ($groups as $group): ?>
				<?php if ($group['group']!='') : ?>
				<tr>
					<td style="color:red;"><strong><?php print $group['group']; ?></strong></td>
				</tr>
				<?php endif; ?>
				<?php foreach ($group['fields'] as $field_name) : ?>
					<tr>
						<?php if ($group['group']!='') : ?>
							<td><strong><?php print "&nbsp;&nbsp;".$field_name['label']; ?></strong></td>
						<?php else : ?>
							<td style="color:blue"><strong><?php print $field_name['label']; ?></strong></td>
						<?php endif; ?>
						<?php foreach ($field_name['items'] as $value) : ?>
							<?php if ($value != '') :  ?>
								<td><?php print $field_name['settings']['prefix'].$value.$field_name['settings']['suffix']; ?></td>
							<?php else : ?>
								<td ><?php print $value ?></td>
							<?php endif; ?>
						<?php endforeach; ?> 
					</tr>
				<?php endforeach; ?> 
			<?php endforeach; ?>
		</tbody>
	</table>
</div>
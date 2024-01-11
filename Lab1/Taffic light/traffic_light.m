% Create a figure for the traffic light
figure;

% Traffic light housing
x = rectangle('Position', [0, 0, 3, 8], 'EdgeColor', 'k', 'FaceColor', 'k');

% Set axis equal for better visual representation
axis equal;

% Set axis limits
xlim([0, 3]);
ylim([0, 8]);

% Turn off axis ticks and labels
axis off;

% Title
title('Traffic Light');

% Loop for three cycles
for cycle = 1:3
    % Red light
    rectangle('Position', [1, 6.5, 1, 1], 'Curvature', [1, 1], 'FaceColor', 'r');
    pause(3);
    
    % Turn off all lights
    clf;
    rectangle('Position', [0, 0, 3, 8], 'EdgeColor', 'k', 'FaceColor', 'k');
    axis equal;
    xlim([0, 3]);
    ylim([0, 8]);
    axis off;
    title('Traffic Light');
    
    % Yellow light
    rectangle('Position', [1, 4, 1, 1], 'Curvature', [1, 1], 'FaceColor', 'y');
    pause(3);
    
    % Turn off all lights
    clf;
    rectangle('Position', [0, 0, 3, 8], 'EdgeColor', 'k', 'FaceColor', 'k');
    axis equal;
    xlim([0, 3]);
    ylim([0, 8]);
    axis off;
    title('Traffic Light');
    
    % Green light
    rectangle('Position', [1, 1.5, 1, 1], 'Curvature', [1, 1], 'FaceColor', 'g');
    pause(3);
    
    % Turn off all lights
    clf;
    rectangle('Position', [0, 0, 3, 8], 'EdgeColor', 'k', 'FaceColor', 'k');
    axis equal;
    xlim([0, 3]);
    ylim([0, 8]);
    axis off;
    title('Traffic Light');
end

% Close the figure
close(gcf);

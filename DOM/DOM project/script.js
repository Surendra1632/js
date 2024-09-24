let colorarray = ["#e58e26", "#f9b4ab", "#B1FB17", "#78e08f", "#fd79a8"];

        function bgchange(colorIndex) {
            // Set background using color from the array
            document.body.style.background = colorarray[colorIndex];
        }

        document.addEventListener("DOMContentLoaded", function () {
            var colorbox = document.getElementById("colorbox");

            // Loop through the array and create clickable spans
            colorarray.forEach(function (color, index) {
                let span = document.createElement("span");
                span.style.backgroundColor = color;
                span.addEventListener("click", function () {
                    bgchange(index);  // Change background when span is clicked
                });
                colorbox.appendChild(span);
            });
        });
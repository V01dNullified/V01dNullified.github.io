<!DOCTYPE html>
<html>
<head>
    <title>blank</title>
</head>
<body>
    <iframe id="mathsisfun-iframe" src="https://cookie-clickernew.v01dnullified.repl.co/"></iframe>
    <script>
        const mathsisfunIframe = document.getElementById('mathsisfun-iframe');
        mathsisfunIframe.width = window.innerWidth + 'px';
        mathsisfunIframe.height = window.innerHeight + 'px';
        window.addEventListener('resize', function() {
            mathsisfunIframe.width = window.innerWidth + 'px';
            mathsisfunIframe.height = window.innerHeight + 'px';
        });
    </script>
</body>
</html>

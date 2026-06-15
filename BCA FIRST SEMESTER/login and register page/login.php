<?php
include "db.php";

$email = $_POST['email'];
$password = $_POST['password'];

$sql = "SELECT * FROM users WHERE email='$email' AND password='$password'";
$result = mysqli_query($conn, $sql);

if (mysqli_num_rows($result) > 0) {
    echo "<script>alert('Login Successful!'); window.location='index.html';</script>";
} else {
    echo "<script>alert('Invalid email or password'); window.location='index.html';</script>";
}
?>

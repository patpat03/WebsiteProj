<?php
require_once('strp.1/init.php');
\Stripe\Stripe::setApiKey('sk_test_LZsPhmztU1MT36GJnbp4eR9N00Vdf7WTi5');

// Token is created using Checkout or Elements!
// Get the payment token ID submitted by the form:
$token = $_POST['cardId'];
$custom = $_POST['customerId'];
$customer = \Stripe\Customer::retrieve($custom);
$customer->default_source = $token;
$customer->save();
echo $token;
 ?>

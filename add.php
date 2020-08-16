<?php
require_once('strp.1/init.php');
\Stripe\Stripe::setApiKey('sk_test_LZsPhmztU1MT36GJnbp4eR9N00Vdf7WTi5');
$customer = $_POST['customerId'];
$card = $_POST['cardId'];
\Stripe\Customer::createSource(
  $customer,
  [
    'source' => $card,
  ]
);
echo($card);
?>

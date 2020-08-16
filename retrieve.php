<?php
require_once('strp.1/init.php');
\Stripe\Stripe::setApiKey("sk_test_LZsPhmztU1MT36GJnbp4eR9N00Vdf7WTi5");
$customer = \Stripe\Customer::retrieve($_POST['customerId']);
$card = $customer->sources->data;
$array = array(sizeof($card));
for($i =0; $i<sizeof($card); $i++)
{
  if($customer->default_source == $card[$i]->id)
  {
    $array[$i] = array("last4"=>$card[$i]->last4, "month"=>$card[$i]->exp_month, "year"=>$card[$i]->exp_year, "id"=>$card[$i]->id,"bool"=> True, "brand"=>$card[$i]->brand);
  }
  else
  {
    $array[$i] = array("last4"=>$card[$i]->last4, "month"=>$card[$i]->exp_month, "year"=>$card[$i]->exp_year, "id"=>$card[$i]->id,"bool"=>False, "brand"=>$card[$i]->brand);
  }
}
echo(json_encode($array));
?>


byte FUN_10069e500(undefined8 param_1)

{
  byte bVar1;
  char local_a [2];
  
  local_a[0] = '\0';
  local_a[1] = 0;
  bVar1 = FUN_10069e570(param_1,"is%1Checked",local_a + 1,local_a);
  return bVar1 & local_a[0] != '\0';
}



bool FUN_1001105f0(long param_1)

{
  char cVar1;
  
  cVar1 = FUN_100683320(param_1 + 0xc);
  if (cVar1 == '\0') {
    FUN_1008e3970("","vm",0,"Invalid kernel driver handle");
  }
  return cVar1 != '\0';
}


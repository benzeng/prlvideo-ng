
undefined8 FUN_100544f00(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_20;
  size_t local_18;
  
  local_20 = 0;
  local_18 = 8;
  iVar1 = _sysctlbyname("hw.memsize",&local_20,&local_18,(void *)0x0,0);
  uVar2 = 0;
  if (iVar1 == 0) {
    uVar2 = local_20;
  }
  return uVar2;
}


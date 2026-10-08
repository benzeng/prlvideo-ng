
undefined8 FUN_1009d9140(undefined8 param_1,ulong param_2,undefined8 param_3)

{
  char cVar1;
  NXArchInfo *pNVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 local_20;
  
  uVar4 = param_2;
  if ((int)param_2 == 0) {
    pNVar2 = _NXGetLocalArchInfo();
    uVar4 = (ulong)(uint)pNVar2->cputype;
    param_3 = 0xffffffff;
  }
  cVar1 = FUN_1009d91a0(param_1,uVar4,param_3,&local_20);
  if (cVar1 == '\0') {
    uVar3 = 0;
  }
  else if ((param_2 & 0x1000000) == 0) {
    uVar3 = FUN_1009d9580();
  }
  else {
    uVar3 = FUN_1009d9490(param_1,local_20);
  }
  return uVar3;
}


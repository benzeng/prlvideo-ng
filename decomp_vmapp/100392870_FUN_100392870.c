
void FUN_100392870(long param_1,uint param_2,long param_3,uint param_4,undefined8 param_5,
                  undefined8 param_6)

{
  char cVar1;
  undefined4 in_EAX;
  long lVar2;
  uint *puVar3;
  undefined8 uVar4;
  
  uVar4 = CONCAT44(param_2,in_EAX);
  cVar1 = *(char *)(param_1 + 0xfd);
  if (((param_2 & 0xffff) == 0x1c) && (cVar1 == '\0')) {
    *(undefined1 *)(param_1 + 0xfd) = 1;
    cVar1 = '\x01';
  }
  lVar2 = param_1 + 0x120;
  if (cVar1 != '\0') {
    lVar2 = param_1 + 0x138;
  }
  puVar3 = *(uint **)(lVar2 + 8);
  if (puVar3 == *(uint **)(lVar2 + 0x10)) {
    FUN_10027f110(lVar2,&stack0xffffffffffffffcc);
    puVar3 = *(uint **)(lVar2 + 8);
  }
  else {
    *puVar3 = param_2;
    puVar3 = puVar3 + 1;
    *(uint **)(lVar2 + 8) = puVar3;
  }
  FUN_10033f0e0(lVar2,puVar3,param_3,param_3 + (ulong)param_4 * 4,param_5,param_6,uVar4);
  FUN_10039fdf0(param_1,param_2,param_3,param_4);
  return;
}


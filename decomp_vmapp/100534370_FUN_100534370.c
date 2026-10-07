
void FUN_100534370(long param_1,long param_2)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  long lVar4;
  
  puVar3 = (undefined4 *)FUN_1002a6010(param_2);
  uVar2 = 0xf0000003;
  switch(*puVar3) {
  case 0x101:
    uVar2 = FUN_1005344a0(*(undefined8 *)(param_1 + 0xa8),param_2);
    break;
  case 0x102:
    if (7 < *(ushort *)(param_2 + 0x14)) {
      lVar1 = *(long *)(param_1 + 0xa8);
      lVar4 = FUN_1002a6010(param_2);
      uVar2 = *(undefined4 *)(lVar4 + 4);
      puVar3 = (undefined4 *)FUN_1002a6010(param_2);
      FUN_10053f0a0(*(long *)(lVar1 + 0x40) + 0x30,uVar2);
      *puVar3 = 0;
      uVar2 = 0;
    }
    break;
  case 0x105:
    FUN_100534890(*(undefined8 *)(param_1 + 0xa8),param_2);
    uVar2 = 0;
    break;
  case 0x106:
    lVar1 = *(long *)(param_1 + 0xa8);
    uVar2 = 0;
    LOCK();
    *(undefined4 *)(*(long *)(lVar1 + 0x40) + 0x20) = 0;
    UNLOCK();
    FUN_1005353d0(*(undefined8 *)(lVar1 + 0x38));
    FUN_1005355f0(*(long *)(lVar1 + 0x40) + 0x30,0);
    puVar3 = (undefined4 *)FUN_1002a6010(param_2);
    *puVar3 = 0;
  }
  FUN_1004c07d0(*(undefined8 *)(param_1 + 0xa8),param_2,uVar2);
  return;
}


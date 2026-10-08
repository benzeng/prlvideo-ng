
void FUN_100537710(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  if (*(long *)(param_1 + 0x50) != 0) {
    lVar1 = *(long *)(*(long *)(param_1 + 0x30) + 0x38);
    uVar2 = 0;
    if ((lVar1 != 0) && (uVar2 = 0, *(int *)(lVar1 + 4) != 0)) {
      uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x40);
    }
    FUN_100534ab0(*(long *)(param_1 + 0x50),uVar2,*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x78))
    ;
    return;
  }
  return;
}


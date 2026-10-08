
void FUN_1005e3ec0(long param_1,char param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  param_1 = param_1 + 0x38;
  uVar1 = FUN_1005ec990(param_1);
  if (param_2 == '\0') {
    FUN_1005b9840(uVar1,1);
    lVar2 = FUN_1005ec990(param_1);
    uVar3 = 0;
    if ((*(long *)(lVar2 + 0x40) != 0) && (uVar3 = 0, *(int *)(*(long *)(lVar2 + 0x40) + 4) != 0)) {
      uVar3 = *(undefined8 *)(lVar2 + 0x48);
    }
    uVar1 = 0;
  }
  else {
    uVar3 = 0;
    FUN_1005b9840(uVar1,0);
    lVar2 = FUN_1005ec990(param_1);
    if ((*(long *)(lVar2 + 0x40) != 0) && (uVar3 = 0, *(int *)(*(long *)(lVar2 + 0x40) + 4) != 0)) {
      uVar3 = *(undefined8 *)(lVar2 + 0x48);
    }
    uVar1 = 1;
  }
  FUN_1005cb730(uVar3,uVar1);
  return;
}


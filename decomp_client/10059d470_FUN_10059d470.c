
void FUN_10059d470(long param_1,int param_2,int param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  if (param_2 != 0 || param_3 != 0) {
    return;
  }
  if (-1 < **(int **)(param_4 + 8)) {
    uVar2 = 0;
    if ((*(long *)(param_1 + 0x38) != 0) &&
       (uVar2 = 0, *(int *)(*(long *)(param_1 + 0x38) + 4) != 0)) {
      uVar2 = *(undefined8 *)(param_1 + 0x40);
    }
    lVar1 = FUN_100599cc0(uVar2);
    *(undefined1 *)(lVar1 + 0x4a) = 1;
  }
  CMappingValueHandler::handleValueFinished(SUB81(*(undefined8 *)(param_1 + 0x10),0));
  return;
}


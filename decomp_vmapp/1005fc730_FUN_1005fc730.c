
void FUN_1005fc730(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  
  if (*(long *)(param_2 + 0x40) != 0) {
    lVar1 = *(long *)(param_2 + 0x30);
    plVar4 = *(long **)(param_2 + 0x38);
    lVar2 = *plVar4;
    *(undefined8 *)(lVar2 + 8) = *(undefined8 *)(lVar1 + 8);
    **(long **)(lVar1 + 8) = lVar2;
    *(undefined8 *)(param_2 + 0x40) = 0;
    if (plVar4 != (long *)(param_2 + 0x30)) {
      do {
        plVar3 = (long *)plVar4[1];
        FUN_1005fc730(param_2 + 0x40,plVar4 + 2);
        operator_delete(plVar4);
        plVar4 = plVar3;
      } while (plVar3 != (long *)(param_2 + 0x30));
    }
  }
  QDateTime::~QDateTime((QDateTime *)(param_2 + 0x28));
  FUN_100013180(param_2 + 0x10);
  return;
}


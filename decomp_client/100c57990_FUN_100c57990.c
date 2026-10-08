
void FUN_100c57990(long param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long local_38;
  undefined8 local_30;
  
  if (*(code **)(param_1 + 0x58) != (code *)0x0) {
    iVar1 = (**(code **)(param_1 + 0x58))(param_1,0,&local_38,0);
    if (0 < iVar1) {
      lVar3 = 0;
      do {
        iVar2 = (**(code **)(param_1 + 0x58))
                          (param_1,&local_30,0,*(undefined4 *)(local_38 + lVar3 * 4));
        if (iVar2 != 0) {
          FUN_100c71520(local_30);
        }
        lVar3 = lVar3 + 1;
      } while (iVar1 != (int)lVar3);
    }
  }
  return;
}


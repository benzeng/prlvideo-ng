
void FUN_1001c27b0(int *param_1,int param_2,int param_3)

{
  int *piVar1;
  undefined8 uVar2;
  int iVar3;
  
  piVar1 = param_1 + 2;
  if (*(long *)(param_1 + 2) != 0) {
    _UnregisterEventHotKey();
    piVar1[0] = 0;
    piVar1[1] = 0;
  }
  iVar3 = 0x61;
  if (param_3 != 0) {
    iVar3 = param_3;
  }
  uVar2 = _GetApplicationEventTarget();
  iVar3 = _RegisterEventHotKey(iVar3,param_2,0x7064686b,uVar2,1,piVar1);
  if (iVar3 == 0) {
    *param_1 = param_3;
    param_1[1] = param_2;
  }
  return;
}


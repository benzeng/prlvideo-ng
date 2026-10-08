
undefined1 FUN_100cd51b0(long *param_1,long *param_2,char param_3)

{
  char cVar1;
  int iVar2;
  undefined1 uVar3;
  long *local_30;
  
  QMutex::lock();
  local_30 = (long *)0x0;
  if (param_2 == (long *)0x0) {
    uVar3 = 0;
    FUN_100df99c0("","hid",0,"[CHIDHostHook] Adding fake key action? Hello, UnitTest!");
  }
  else {
    cVar1 = (**(code **)(*param_2 + 0xf0))(param_2);
    if (cVar1 == '\0') {
      uVar3 = 0;
    }
    else {
      if (param_3 == '\0') {
        cVar1 = (**(code **)(*param_1 + 0x108))(param_1,param_2);
        if (cVar1 != '\0') {
          uVar3 = 0;
          FUN_100df99c0("","hid",0,"[CHIDHostHook] Action exists, but rewrite not allowed.");
          goto LAB_100cd52f5;
        }
      }
      else {
        (**(code **)(*param_1 + 0xf8))(param_1,param_2);
      }
      iVar2 = (**(code **)(*param_2 + 0xf8))(param_2);
      if (iVar2 == 1) {
        local_30 = (long *)FUN_100cd00c0(param_1);
      }
      else {
        iVar2 = (**(code **)(*param_2 + 0xf8))(param_2);
        if (iVar2 != 2) {
          uVar3 = 0;
          FUN_100df99c0("","hid",0,"[CHIDHostHook] Unknown action object.");
          goto LAB_100cd52f5;
        }
        local_30 = (long *)FUN_100cd1920(param_1);
      }
      (**(code **)(*local_30 + 0x70))(local_30,param_2);
      uVar3 = 1;
      FUN_100cd5ea0(param_1 + 4,&local_30);
    }
  }
LAB_100cd52f5:
  QMutex::unlock();
  return uVar3;
}


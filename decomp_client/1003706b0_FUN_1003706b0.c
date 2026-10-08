
undefined8 FUN_1003706b0(undefined8 param_1,undefined8 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_30;
  undefined2 local_28;
  
  uVar2 = FUN_100152280();
  lVar3 = FUN_1001548f0(uVar2,param_2);
  if (lVar3 == 0) {
    FUN_100df99c0("[CONSOLE_MNG]","prl_client_app",0,
                  "(!)Error: cannot create console window, VM is absent.");
  }
  else {
    uVar2 = FUN_10018c280(lVar3);
    lVar3 = FUN_1003192a0(uVar2,param_4);
    if (lVar3 == 0) {
      FUN_100df99c0("[CONSOLE_MNG]","prl_client_app",0,
                    "(!)Error: cannot create console window, VM display [%d] does not exist",param_4
                   );
    }
    else {
      iVar1 = FUN_100325aa0(lVar3);
      if (iVar1 == param_3) {
        FUN_100326130(lVar3);
      }
      else {
        local_28 = 0;
        local_30 = 0;
        FUN_1003244f0(lVar3,param_3,&local_30);
      }
    }
  }
  return 0;
}


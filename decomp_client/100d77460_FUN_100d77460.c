
undefined8 FUN_100d77460(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 local_88 [80];
  long local_38;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_38 = lVar1;
  iVar3 = _FSPathMakeRefWithOptions(param_1,1,local_88,0);
  uVar6 = 0xc;
  if ((iVar3 != -0x2b) && (iVar3 != -0x23)) {
    if (iVar3 == 0) {
      FUN_100d77820();
      uVar4 = _FSOpenResFile(local_88,1);
      sVar2 = _ResError();
      uVar6 = 6;
      if (sVar2 != -0x581) {
        if (sVar2 == 0) {
          uVar5 = _Get1IndResource(0x616c6973,1);
          sVar2 = _ResError();
          uVar6 = 6;
          if (sVar2 != -0xc0) {
            if (sVar2 == 0) {
              _DetachResource(uVar5);
              *param_2 = uVar5;
              uVar6 = 0;
            }
            else {
              uVar6 = 3;
              if (0 < DAT_10230ffd0) {
                FUN_100df99c0("","MacAlias",1,"Get1IndResource() err %i, aliasPath=\"%s\"",
                              (int)sVar2,param_1);
              }
            }
          }
          _CloseResFile(uVar4);
        }
        else {
          uVar6 = 3;
          if (0 < DAT_10230ffd0) {
            FUN_100df99c0("","MacAlias",1,"FSOpenResFile() err %i, aliasPath=\"%s\"",(int)sVar2,
                          param_1);
          }
        }
      }
      FUN_100d77870();
    }
    else {
      uVar6 = 3;
      if (0 < DAT_10230ffd0) {
        FUN_100df99c0("","MacAlias",1,"FSPathMakeRefWithOptions() err %i, aliasPath=\"%s\"",iVar3,
                      param_1);
      }
    }
  }
  if (lVar1 == local_38) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


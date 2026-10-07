
bool FUN_10049c870(undefined8 param_1,string *param_2)

{
  long lVar1;
  short sVar2;
  ulong uVar3;
  bool bVar4;
  string local_e0 [24];
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined1 *local_88;
  undefined1 local_78 [80];
  long local_28;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  uStack_c0 = 0;
  local_88 = local_78;
  local_c8 = 0x48;
  local_28 = lVar1;
  sVar2 = _GetProcessInformation(param_1,&local_c8);
  if (sVar2 == 0) {
    FUN_10049c980(local_e0,local_88);
    std::string::operator=(param_2,local_e0);
    std::string::~string(local_e0);
    if (((byte)*param_2 & 1) == 0) {
      uVar3 = (ulong)((byte)*param_2 >> 1);
    }
    else {
      uVar3 = *(ulong *)(param_2 + 8);
    }
    bVar4 = uVar3 != 0;
  }
  else {
    bVar4 = false;
    FUN_1008e3970("","prl_sharedapps",0,"Error getting process information, err=%d",(int)sVar2);
  }
  if (lVar1 == local_28) {
    return bVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



bool FUN_1009d4210(byte *param_1,ulong param_2,int param_3,ulong param_4,undefined8 param_5,
                  undefined4 param_6,byte param_7,char param_8)

{
  undefined4 uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  char cVar6;
  char cVar7;
  byte bVar8;
  mach_port_t mVar9;
  ulong uVar10;
  int iVar11;
  long lVar12;
  undefined1 local_f0 [32];
  int local_d0;
  int local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  iVar11 = (int)param_2;
  if (*(code **)(param_1 + 0x78) == (code *)0x0) {
    lVar12 = *(long *)(param_1 + 0xf0);
    if (lVar12 == 0) {
      local_48 = 0;
      uStack_40 = 0;
      local_38 = 0;
      if ((*param_1 & 1) == 0) {
        uVar10 = (ulong)(*param_1 >> 1);
      }
      else {
        uVar10 = *(ulong *)(param_1 + 8);
      }
      mVar9 = 0;
      if (uVar10 != 0) {
        uVar1 = *(undefined4 *)PTR__mach_task_self__1021e1c58;
        if (param_8 == '\0') {
          mVar9 = _mach_thread_self();
        }
        FUN_1009d51e0(local_f0,uVar1,mVar9);
        FUN_1009d5360(local_f0,param_5);
        iVar3 = local_d0;
        iVar4 = local_cc;
        uVar1 = local_c8;
        uVar5 = local_c4;
        if ((((iVar11 == 0) || (param_3 == 0)) ||
            (iVar3 = iVar11, iVar4 = param_3, uVar1 = (int)param_4, uVar5 = param_6,
            *(code **)(param_1 + 0x60) == (code *)0x0)) ||
           (cVar7 = (**(code **)(param_1 + 0x60))(*(undefined8 *)(param_1 + 0x70)), iVar4 = param_3,
           uVar5 = param_6, cVar7 != '\0')) {
          local_c4 = uVar5;
          local_c8 = uVar1;
          local_cc = iVar4;
          local_d0 = iVar3;
          bVar8 = FUN_1009d54a0(local_f0,*(undefined8 *)(param_1 + 0x58));
          mVar9 = (mach_port_t)bVar8;
          bVar2 = false;
        }
        else {
          bVar2 = true;
          mVar9 = 0;
        }
        FUN_1009d5320(local_f0);
        param_2 = param_2 & 0xffffffff;
        if (bVar2) {
          std::string::~string((string *)&local_48);
          return false;
        }
      }
      cVar7 = (char)mVar9;
      if (*(code **)(param_1 + 0x68) != (code *)0x0) {
        bVar8 = (**(code **)(param_1 + 0x68))
                          (*(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x50),
                           *(undefined8 *)(param_1 + 0x70),mVar9);
        if ((bVar8 & param_7) == 1) {
                    /* WARNING: Subroutine does not return */
          __exit(param_2 & 0xffffffff);
        }
      }
      std::string::~string((string *)&local_48);
    }
    else {
      cVar7 = '\0';
      if ((iVar11 != 0) && (param_3 != 0)) {
        if (*(code **)(param_1 + 0x60) != (code *)0x0) {
          param_4 = param_4 & 0xffffffff;
          cVar7 = (**(code **)(param_1 + 0x60))(*(undefined8 *)(param_1 + 0x70));
          if (cVar7 == '\0') {
            return false;
          }
          lVar12 = *(long *)(param_1 + 0xf0);
        }
        cVar7 = FUN_1009da1c0(lVar12,param_2 & 0xffffffff,param_3,param_4,param_6);
        if ((cVar7 != '\0') && (param_7 != 0)) {
                    /* WARNING: Subroutine does not return */
          __exit(param_2 & 0xffffffff);
        }
      }
    }
  }
  else {
    cVar6 = (**(code **)(param_1 + 0x78))
                      (*(undefined8 *)(param_1 + 0x70),param_2,param_3,param_4,param_6);
    cVar7 = '\0';
    if ((cVar6 != '\0') && (param_7 != 0)) {
                    /* WARNING: Subroutine does not return */
      __exit(param_2 & 0xffffffff);
    }
  }
  return cVar7 != '\0';
}


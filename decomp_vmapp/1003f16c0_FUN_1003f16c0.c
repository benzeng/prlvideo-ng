
/* WARNING: Type propagation algorithm not settling */

int FUN_1003f16c0(long *param_1,undefined8 param_2,byte *param_3,char param_4,uint *param_5,
                 long param_6,ulong *param_7,ulong param_8,ulong *param_9)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  size_t sVar6;
  ulong *puVar7;
  undefined8 uVar8;
  int iVar9;
  undefined4 uVar10;
  long lVar11;
  uint *local_b0;
  undefined4 local_a8;
  ulong local_a0 [3];
  int local_88 [2];
  ulong local_80 [3];
  undefined2 local_68;
  ulong local_58 [2];
  undefined2 local_48;
  long local_38;
  
  lVar11 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_38 = lVar11;
  if (param_7 != (ulong *)0x0) {
    ___bzero(param_7);
  }
  iVar2 = -0xf;
  if ((param_3 == (byte *)0x0) || ((param_4 != '\0' && (param_5 == (uint *)0x0))))
  goto LAB_1003f19f7;
  bVar1 = *param_3;
  uVar10 = 320000;
  if (bVar1 < 0x53) {
    if (bVar1 < 0x1b) {
      if ((bVar1 == 1) || (bVar1 == 4)) goto LAB_1003f17a1;
LAB_1003f17a9:
      uVar10 = 10000;
      if (param_4 == '\x01') {
        uVar10 = 80000;
      }
    }
    else if (bVar1 != 0x1b) {
      if (bVar1 != 0x35) goto LAB_1003f17a9;
      goto LAB_1003f17a1;
    }
  }
  else {
    if (bVar1 < 0xa1) {
      if ((bVar1 != 0x53) && (bVar1 != 0x5b)) goto LAB_1003f17a9;
    }
    else {
      if (bVar1 == 0xa6) goto LAB_1003f17be;
      if (bVar1 != 0xa1) goto LAB_1003f17a9;
    }
LAB_1003f17a1:
    uVar10 = 300000;
  }
LAB_1003f17be:
  local_80[0] = 0;
  if ((*(int *)((long)param_1 + 0x2c) == 0) || ((long *)param_1[2] == (long *)0x0)) {
    puVar7 = local_58;
    if (0x11 < param_8) {
      puVar7 = param_7;
    }
    local_58[0] = 0;
    local_58[1] = 0;
    local_48 = 0;
    if (param_7 == (ulong *)0x0) {
      puVar7 = local_58;
    }
    iVar9 = 0;
    (**(code **)(*param_1 + 0x290))(param_1,0x62800,puVar7,0x12,0);
    iVar2 = 0;
    if (((param_8 != 0) && (iVar2 = iVar9, param_7 != (ulong *)0x0)) && (puVar7 == local_58)) {
      _memcpy(param_7,local_58,param_8 & 0xff);
    }
  }
  else {
    uVar3 = ((param_6 << 0x3f) >> 0x3f) + param_6;
    plVar4 = (long *)(**(code **)(*(long *)param_1[2] + 0x50))();
    param_1[3] = (long)plVar4;
    iVar9 = -1;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x60))(plVar4,uVar10);
      iVar2 = (**(code **)(*(long *)param_1[3] + 0x40))((long *)param_1[3],param_3,0xc);
      if (iVar2 == 0) {
        if (uVar3 != 0) {
          local_a8 = (undefined4)uVar3;
          local_b0 = param_5;
          iVar2 = (**(code **)(*(long *)param_1[3] + 0x58))
                            ((long *)param_1[3],&local_b0,1,uVar3,param_4);
          if (iVar2 != 0) goto LAB_1003f18c8;
        }
        iVar2 = (**(code **)(*(long *)param_1[3] + 0x80))
                          ((long *)param_1[3],local_a0,local_88,local_80);
        if (iVar2 == 0) {
          local_88[1] = 0;
          iVar2 = (**(code **)(*(long *)param_1[3] + 0x90))((long *)param_1[3],local_88 + 1);
          if (iVar2 == 0) {
            uVar5 = local_80[0];
            if (((local_80[0] & 1) != 0) && (uVar5 = local_80[0] + 1, local_80[0] + 1 <= uVar3)) {
              uVar5 = local_80[0] - 1;
            }
            local_80[0] = uVar5;
            if (param_9 != (ulong *)0x0) {
              *param_9 = local_80[0];
            }
            uVar8 = 0x20400;
            if (local_88[0] < 0xff) {
              iVar9 = 0;
              switch(local_88[0]) {
              case 0:
                goto switchD_1003f1a6e_caseD_0;
              case 1:
              case 3:
              case 4:
              case 5:
                goto switchD_1003f1a6e_caseD_1;
              case 2:
                if (param_7 == (ulong *)0x0) goto LAB_1003f18c8;
                sVar6 = 0x12;
                if (param_8 < 0x13) {
                  sVar6 = param_8;
                }
                puVar7 = local_a0;
                goto LAB_1003f1b1b;
              default:
                goto switchD_1003f1a6e_default;
              }
            }
            if (local_88[0] == 0xff) {
switchD_1003f1a6e_caseD_1:
              uVar8 = 0x23a00;
              if (local_88[0] == 2) goto LAB_1003f18c8;
            }
switchD_1003f1a6e_default:
            puVar7 = local_80 + 1;
            if (0x11 < param_8) {
              puVar7 = param_7;
            }
            local_80[1] = 0;
            local_80[2] = 0;
            local_68 = 0;
            if (param_7 == (ulong *)0x0) {
              puVar7 = local_80 + 1;
            }
            (**(code **)(*param_1 + 0x290))(param_1,uVar8,puVar7,0x12,0);
            if (((param_8 != 0) && (param_7 != (ulong *)0x0)) && (puVar7 == local_80 + 1)) {
              sVar6 = param_8 & 0xff;
              puVar7 = local_80 + 1;
LAB_1003f1b1b:
              _memcpy(param_7,puVar7,sVar6);
            }
          }
        }
      }
LAB_1003f18c8:
      iVar9 = -1;
switchD_1003f1a6e_caseD_0:
      (**(code **)(*(long *)param_1[3] + 0x18))();
      param_1[3] = 0;
    }
    iVar2 = iVar9;
    if (param_9 != (ulong *)0x0) {
      uVar5 = *param_9;
      if ((uVar3 != 0) && (uVar5 == 0)) {
        *param_9 = uVar3;
        uVar5 = uVar3;
      }
      iVar2 = -1;
      lVar11 = *(long *)PTR____stack_chk_guard_100ba2320;
      if ((((iVar9 == 0) && (iVar2 = 0, param_5 != (uint *)0x0)) && (3 < uVar5)) &&
         ((*param_5 & 0xefffffff) == 0x43425355)) {
        iVar2 = 0;
        FUN_1008e3970("","DVDImage",0,"[DVD Drive:PT] USB signature cmd:0x%02X",*param_3);
      }
      goto LAB_1003f19f7;
    }
  }
  lVar11 = *(long *)PTR____stack_chk_guard_100ba2320;
LAB_1003f19f7:
  if (lVar11 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar2;
}


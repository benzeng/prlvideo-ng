
void FUN_10027d940(long *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  long lVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  int local_38;
  int local_34;
  
  if (2 < DAT_1011b55f8) {
    FUN_1008e3970("","LocalDevices",3,"[CNetVirtIo::ProcessNetRequest] req:%d param:%llx",*param_2,
                  *(undefined8 *)(param_2 + 2));
  }
  switch(*param_2) {
  case 1:
    local_34 = 0;
    local_38 = 0;
    iVar3 = FUN_10027e4d0(param_1 + 3,param_1 + 0x109,0x400,&local_38,&local_34);
    if (-1 < iVar3) {
      do {
        iVar7 = local_38 + local_34;
        iVar8 = 0;
        if (0 < iVar7) {
          uVar5 = (ulong)(uint)(local_38 + -1 + local_34) + 1;
          uVar11 = uVar5 & 0x1fffffffe;
          iVar8 = 0;
          iVar6 = 0;
          uVar10 = 0;
          if (uVar11 != 0) {
            uVar9 = (ulong)(uint)(local_38 + -1 + local_34) + 1 & 0xfffffffffffffffe;
            iVar8 = 0;
            iVar6 = 0;
            plVar4 = param_1 + 0x10c;
            do {
              iVar8 = iVar8 + (int)plVar4[-2];
              iVar6 = iVar6 + (int)*plVar4;
              plVar4 = plVar4 + 4;
              uVar9 = uVar9 - 2;
              uVar10 = uVar11;
            } while (uVar9 != 0);
          }
          iVar8 = iVar8 + iVar6;
          if (uVar5 != uVar10) {
            iVar6 = (int)uVar10;
            if ((iVar7 - iVar6 & 3U) != 0) {
              plVar4 = param_1 + uVar10 * 2 + 0x10a;
              iVar7 = -(iVar7 - iVar6 & 3U);
              do {
                iVar8 = iVar8 + (int)*plVar4;
                uVar10 = uVar10 + 1;
                plVar4 = plVar4 + 2;
                iVar7 = iVar7 + 1;
              } while (iVar7 != 0);
            }
            if (2 < (uint)((local_38 + -1 + local_34) - iVar6)) {
              plVar4 = param_1 + uVar10 * 2 + 0x110;
              iVar7 = (local_38 + 3 + local_34) - ((int)uVar10 + 3);
              do {
                iVar8 = iVar8 + (int)plVar4[-6] + (int)plVar4[-4] + (int)plVar4[-2] + (int)*plVar4;
                plVar4 = plVar4 + 8;
                iVar7 = iVar7 + -4;
              } while (iVar7 != 0);
            }
          }
        }
        if (((int)param_1[4] != 0) && (*(uint *)((long)param_1 + 0x1c) != 0)) {
          lVar2 = param_1[7];
          uVar10 = (ulong)*(ushort *)(lVar2 + 2) % (ulong)*(uint *)((long)param_1 + 0x1c);
          *(int *)(lVar2 + 4 + uVar10 * 8) = iVar3;
          *(int *)(lVar2 + 8 + uVar10 * 8) = iVar8;
          *(short *)(param_1[7] + 2) = *(short *)(param_1[7] + 2) + 1;
        }
        local_34 = 0;
        local_38 = 0;
        iVar3 = FUN_10027e4d0(param_1 + 3,param_1 + 0x109,0x400,&local_38,&local_34);
      } while (-1 < iVar3);
    }
    break;
  case 3:
    FUN_100276490(param_1[1],1);
    return;
  case 4:
    FUN_10027a1c0(param_1[1],param_2 + 2);
    return;
  case 8:
    (**(code **)(*param_1 + 0x38))(param_1);
    FUN_10027d110(param_1 + 0x90e,*(undefined8 *)(param_2 + 2),0x100,0,
                  *(undefined4 *)(param_1[2] + 0x30));
    if ((*(byte *)(param_1[2] + 0x10) & 7) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010027dbf3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x30))(param_1,0);
      return;
    }
    break;
  case 9:
    FUN_10027d110(param_1 + 3,*(undefined8 *)(param_2 + 2),0x100,0,
                  *(undefined4 *)(param_1[2] + 0x30));
    return;
  case 0xb:
    uVar1 = *(undefined4 *)(param_1[2] + 0x30);
    *(undefined4 *)((long)param_1 + 0x24) = uVar1;
    *(undefined4 *)((long)param_1 + 0x487c) = uVar1;
  }
  return;
}


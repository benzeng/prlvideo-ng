
int FUN_1000c0e10(long param_1)

{
  long lVar1;
  int *piVar2;
  ulong uVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  QString *pQVar7;
  QArrayData *local_48;
  QString local_40;
  undefined1 local_31;
  
  iVar6 = *(int *)(param_1 + 0xa4);
  iVar4 = **(int **)(param_1 + 0xf8);
  if (iVar4 < 0x12) {
    switch(iVar4) {
    case 0:
      break;
    default:
      goto switchD_1000c0e52_caseD_1;
    case 3:
      FUN_10008eef0(param_1);
      if (*(int *)(param_1 + 0xa4) == 10) {
        iVar6 = 0;
        FUN_10008fdb0(DAT_1011c3698,0x4e4f,0);
      }
      else {
        iVar6 = 0;
        if (*(int *)(param_1 + 0xa4) == 2) {
          FUN_10008fdb0(DAT_1011c3698,0x4e3d,*(undefined4 *)(param_1 + 0x110));
        }
      }
      break;
    case 5:
      FUN_10008eef0(param_1);
      FUN_10008fdb0(DAT_1011c3698,0x4e4f,0x80000009);
      iVar6 = 0;
      break;
    case 8:
LAB_1000c11d3:
      FUN_10008fdb0(DAT_1011c3698,0x4e3e,*(undefined4 *)(param_1 + 0x110));
      iVar6 = 3;
      break;
    case 10:
      FUN_10008fdb0(DAT_1011c3698,0x4e41,*(undefined4 *)(param_1 + 0x110));
      uVar3 = FUN_1007d87f0();
      FUN_1008e3970("","vm",0,"[%8llu] VCPU #%u is going to freeze dl:%llu t:%llu",uVar3 / 1000,
                    *(undefined4 *)(param_1 + 0x110),
                    *(undefined8 *)(*(long *)(DAT_1011c3698 + 0x1a10) + 0x718),
                    *(undefined8 *)(*(long *)(DAT_1011c3698 + 0x1a10) + 0x710));
      iVar6 = 7;
    }
    goto switchD_1000c0e52_caseD_0;
  }
  if (iVar4 < 0x70) {
    if (iVar4 < 0x26) {
      if (iVar4 < 0x20) {
        if (iVar4 == 0x12) {
          pQVar7 = (QString *)(DAT_1011c3698 + 0x109d8);
          QString::fromUtf8_helper((char *)&local_40,0x9eb57a);
          QString::operator=(pQVar7,&local_40);
          piVar2 = (int *)CONCAT71(local_40.field0_0x0._1_7_,local_40.field0_0x0._0_1_);
          if (*piVar2 != -1) {
            if (*piVar2 != 0) {
              LOCK();
              *piVar2 = *piVar2 + -1;
              local_31 = *piVar2 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1000c0f12;
            }
            QArrayData::deallocate
                      ((QArrayData *)CONCAT71(local_40.field0_0x0._1_7_,local_40.field0_0x0._0_1_),2
                       ,8);
          }
LAB_1000c0f12:
          pQVar7 = (QString *)(DAT_1011c3698 + 0x109d8);
          pcVar5 = (char *)(*(long *)(param_1 + 0xf8) + 8);
          _strlen(pcVar5);
          QString::fromUtf8_helper((char *)&local_48,(int)pcVar5);
          QString::append(pQVar7);
          if (*(int *)local_48 != -1) {
            if (*(int *)local_48 != 0) {
              LOCK();
              *(int *)local_48 = *(int *)local_48 + -1;
              local_40.field0_0x0._0_1_ = *(int *)local_48 != 0;
              UNLOCK();
              if ((bool)local_40.field0_0x0._0_1_) goto LAB_1000c0f7b;
            }
            QArrayData::deallocate(local_48,2,8);
          }
LAB_1000c0f7b:
          FUN_10008fdb0(DAT_1011c3698,0x4e44,*(undefined4 *)(param_1 + 0x110));
          FUN_1000a7d10(DAT_1011c3698,5);
          *(undefined1 *)(param_1 + 0x80) = 0;
          FUN_10008eef0(param_1);
          FUN_10008f9b0(param_1);
          FUN_10008f940(param_1);
          goto switchD_1000c0e52_caseD_0;
        }
        if (iVar4 == 0x13) {
          FUN_1008e3970("","vm",0,"Recurrent abort is detected at VCPU %x",
                        *(undefined4 *)(param_1 + 0x110));
          goto LAB_1000c11d3;
        }
      }
      else {
        if (iVar4 == 0x20) {
          iVar6 = (uint)(iVar6 != 9) + (uint)(iVar6 != 9) * 4;
          FUN_10008eef0(param_1);
          FUN_10008fdb0(DAT_1011c3698,0x4e3f,*(undefined4 *)(param_1 + 0x110));
          goto switchD_1000c0e52_caseD_0;
        }
        if (iVar4 == 0x23) {
          FUN_10008fdb0(DAT_1011c3698,0x4e43,*(undefined4 *)(param_1 + 0x110));
          goto switchD_1000c0e52_caseD_0;
        }
      }
    }
    else if (iVar4 == 0x26) {
      FUN_10008fde0(param_1,1);
      goto switchD_1000c0e52_caseD_0;
    }
  }
  else if (iVar4 == 0x70) {
    lVar1 = *(long *)(DAT_1011c3698 + 0x109c8);
    piVar2 = *(int **)(DAT_1011c3698 + 0x1918);
    if (piVar2 == (int *)0x0) {
      FUN_1008e3970("","vm",0,"No SaRe buffer at stage %u",*(undefined4 *)(lVar1 + 0x360));
      iVar4 = 0x210;
    }
    else {
      iVar4 = *piVar2;
      *piVar2 = 0;
      if (iVar4 < 0x220) {
        if (iVar4 < 0x210) {
          if (((1 < iVar4 - 0x101U) && (iVar4 != 0x120)) && (iVar4 != 0x202)) {
LAB_1000c12c9:
            FUN_1008e3970("","vm",0,"Unsupported SaRe command 0x%X at stage %u",iVar4,
                          *(undefined4 *)(lVar1 + 0x360));
            FUN_1000a7d10(DAT_1011c3698,3);
            goto switchD_1000c0e52_caseD_0;
          }
        }
        else if (iVar4 != 0x210) goto LAB_1000c12c9;
      }
      else if (iVar4 != 0x220) goto LAB_1000c12c9;
      FUN_1008e3970("","vm",0,"Executing SaRe stage %u... done",*(undefined4 *)(lVar1 + 0x360));
    }
    FUN_10008eef0(param_1);
    *(int *)(lVar1 + 0x360) = *(int *)(lVar1 + 0x360) + 1;
    FUN_10008fa70(lVar1,iVar4);
    iVar6 = 0;
    goto switchD_1000c0e52_caseD_0;
  }
switchD_1000c0e52_caseD_1:
  FUN_1000aec00(DAT_1011c3698,*(undefined4 *)(param_1 + 0x110));
switchD_1000c0e52_caseD_0:
  **(undefined4 **)(param_1 + 0xf8) = 0;
  *(undefined4 *)(*(long *)(param_1 + 0xf8) + 4) = 0;
  return iVar6;
}


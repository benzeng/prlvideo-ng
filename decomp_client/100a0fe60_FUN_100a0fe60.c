
void FUN_100a0fe60(long param_1,int param_2,QVariant *param_3,long *param_4)

{
  QMapNodeBase *pQVar1;
  long lVar2;
  char cVar3;
  int *piVar4;
  ulong *puVar5;
  undefined4 uVar6;
  long lVar7;
  long lVar8;
  Data_conflict *pDVar9;
  QString local_78;
  Data_conflict local_70;
  undefined4 local_68;
  QString local_60;
  QMapNodeBase *local_58;
  QVariant local_50;
  QMapNodeBase *local_40;
  undefined1 local_31;
  
  if (param_2 == 0xcc) {
    *(undefined4 *)(param_1 + 0x58) = 0xb7a1;
    goto LAB_100a0ff7b;
  }
  if (param_2 - 200U < 100) {
    *(undefined4 *)(param_1 + 0x58) = 0;
    goto LAB_100a0ff7b;
  }
  if (param_2 < 0x1f7) {
    switch(param_2) {
    case 400:
      QVariant::toMap();
      local_60.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("errors",6)
      ;
      local_68 = 0x80000000;
      local_70.field7 = 0;
      if (*(long *)(local_58 + 0x10) == 0) {
LAB_100a1009a:
        lVar8 = 0;
      }
      else {
        lVar2 = *(long *)(local_58 + 0x10);
        lVar7 = 0;
        do {
          while (lVar8 = lVar2, cVar3 = operator<((QString *)(lVar8 + 0x18),&local_60),
                cVar3 != '\0') {
            lVar2 = *(long *)(lVar8 + 0x10);
            if (*(long *)(lVar8 + 0x10) == 0) {
              lVar8 = lVar7;
              if (lVar7 == 0) goto LAB_100a1009a;
              goto LAB_100a10089;
            }
          }
          lVar2 = *(long *)(lVar8 + 8);
          lVar7 = lVar8;
        } while (*(long *)(lVar8 + 8) != 0);
LAB_100a10089:
        cVar3 = operator<(&local_60,(QString *)(lVar8 + 0x18));
        if (cVar3 != '\0') goto LAB_100a1009a;
      }
      pDVar9 = &local_70;
      if (lVar8 != 0) {
        pDVar9 = (Data_conflict *)(lVar8 + 0x20);
      }
      QVariant::QVariant(&local_50,(QVariant *)pDVar9);
      QVariant::toMap();
      QVariant::~QVariant(&local_50);
      QVariant::~QVariant((QVariant *)&local_70);
      if (*(int *)local_60.field0_0x0 != -1) {
        if (*(int *)local_60.field0_0x0 != 0) {
          LOCK();
          *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
          local_31 = *(int *)local_60.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100a10103;
        }
        QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
      }
LAB_100a10103:
      if (*(int *)local_58 != -1) {
        if (*(int *)local_58 != 0) {
          LOCK();
          *(int *)local_58 = *(int *)local_58 + -1;
          local_31 = *(int *)local_58 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100a1014b;
        }
        if (*(long *)(local_58 + 0x10) != 0) {
          FUN_100037d60();
          QMapDataBase::freeTree(local_58,(int)*(undefined8 *)(local_58 + 0x10));
        }
        QMapDataBase::freeData((QMapDataBase *)local_58);
      }
LAB_100a1014b:
      local_78.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("email",5);
      if (*(long *)(local_40 + 0x10) == 0) {
LAB_100a101c6:
        lVar8 = 0;
      }
      else {
        lVar2 = *(long *)(local_40 + 0x10);
        lVar7 = 0;
        do {
          while (lVar8 = lVar2, cVar3 = operator<((QString *)(lVar8 + 0x18),&local_78),
                cVar3 != '\0') {
            lVar2 = *(long *)(lVar8 + 0x10);
            if (*(long *)(lVar8 + 0x10) == 0) {
              lVar8 = lVar7;
              if (lVar7 == 0) goto LAB_100a101c6;
              goto LAB_100a101b5;
            }
          }
          lVar2 = *(long *)(lVar8 + 8);
          lVar7 = lVar8;
        } while (*(long *)(lVar8 + 8) != 0);
LAB_100a101b5:
        cVar3 = operator<(&local_78,(QString *)(lVar8 + 0x18));
        if (cVar3 != '\0') goto LAB_100a101c6;
      }
      if (*(int *)local_78.field0_0x0 != -1) {
        if (*(int *)local_78.field0_0x0 != 0) {
          LOCK();
          *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
          local_31 = *(int *)local_78.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100a101f8;
        }
        QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
      }
LAB_100a101f8:
      uVar6 = 0x80047008;
      if (lVar8 == 0) {
        uVar6 = 0x80047002;
      }
      *(undefined4 *)(param_1 + 0x58) = uVar6;
      if (*(int *)local_40 != -1) {
        if (*(int *)local_40 != 0) {
          LOCK();
          *(int *)local_40 = *(int *)local_40 + -1;
          local_31 = *(int *)local_40 != 0;
          UNLOCK();
          if ((bool)local_31) break;
        }
        if (*(long *)(local_40 + 0x10) != 0) {
          FUN_100037d60();
          QMapDataBase::freeTree(local_40,(int)*(undefined8 *)(local_40 + 0x10));
        }
        QMapDataBase::freeData((QMapDataBase *)local_40);
      }
      break;
    case 0x191:
      *(undefined4 *)(param_1 + 0x58) = 0x80047004;
      break;
    default:
      goto switchD_100a0fed2_caseD_192;
    case 0x193:
      *(undefined4 *)(param_1 + 0x58) = 0x80047010;
      break;
    case 0x194:
      *(undefined4 *)(param_1 + 0x58) = 0x80047003;
      break;
    case 0x199:
      *(undefined4 *)(param_1 + 0x58) = 0x80047006;
    }
  }
  else {
    if (param_2 == 0x1f7) {
      *(undefined4 *)(param_1 + 0x58) = 0x80047007;
      goto LAB_100a0ff7b;
    }
switchD_100a0fed2_caseD_192:
    *(undefined4 *)(param_1 + 0x58) = 0x80047025;
  }
LAB_100a0ff7b:
  QVariant::operator=((QVariant *)(param_1 + 0x60),param_3);
  piVar4 = (int *)*param_4;
  if (*(int **)(param_1 + 0x70) != piVar4) {
    if (*piVar4 == 0) {
      piVar4 = (int *)QMapDataBase::createData();
      if (*(long *)(*param_4 + 0x10) != 0) {
        puVar5 = (ulong *)FUN_10008d330(*(long *)(*param_4 + 0x10),piVar4);
        *(ulong **)(piVar4 + 4) = puVar5;
        *puVar5 = *puVar5 & 3 | (ulong)(piVar4 + 2);
        QMapDataBase::recalcMostLeftNode();
      }
    }
    else if (*piVar4 != -1) {
      LOCK();
      *piVar4 = *piVar4 + 1;
      local_31 = *piVar4 != 0;
      UNLOCK();
      piVar4 = (int *)*param_4;
    }
    pQVar1 = *(QMapNodeBase **)(param_1 + 0x70);
    *(int **)(param_1 + 0x70) = piVar4;
    if (*(int *)pQVar1 != -1) {
      if (*(int *)pQVar1 != 0) {
        LOCK();
        *(int *)pQVar1 = *(int *)pQVar1 + -1;
        local_31 = *(int *)pQVar1 != 0;
        UNLOCK();
        if ((bool)local_31) {
          return;
        }
      }
      if (*(long *)(pQVar1 + 0x10) != 0) {
        FUN_100037d60();
        QMapDataBase::freeTree(pQVar1,(int)*(undefined8 *)(pQVar1 + 0x10));
      }
      QMapDataBase::freeData((QMapDataBase *)pQVar1);
    }
  }
  return;
}


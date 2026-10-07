
undefined1 FUN_1000393f0(undefined8 param_1,undefined8 param_2,byte *param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  long lVar7;
  undefined1 uVar8;
  uint local_6c;
  undefined1 local_68 [32];
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  QString::toUtf8();
  QString::toUtf8();
  QString::toUtf8();
  local_6c = (uint)*param_3;
  iVar2 = FUN_10078cca0(local_68,0x50);
  if (iVar2 == 0) {
    iVar2 = FUN_10078cd90(local_68,&local_6c,4,0x200d);
    if (iVar2 == 0) {
      iVar2 = FUN_10078cd90(local_68,local_38 + *(long *)(local_38 + 0x10),
                            *(undefined4 *)(local_38 + 4),0x200a);
      if (iVar2 == 0) {
        iVar2 = FUN_10078cd90(local_68,local_40 + *(long *)(local_40 + 0x10),
                              *(undefined4 *)(local_40 + 4),0x200b);
        if (iVar2 == 0) {
          iVar2 = FUN_10078cd90(local_68,local_48 + *(long *)(local_48 + 0x10),
                                *(undefined4 *)(local_48 + 4),0x200c);
          if (iVar2 == 0) {
            puVar6 = (undefined4 *)FUN_10078cc60(local_68);
            *puVar6 = 1;
            puVar6[2] = param_4;
            lVar7 = FUN_1002a6120(param_2,1,1);
            uVar1 = *(uint *)(lVar7 + 8);
            uVar3 = FUN_10078cc70(local_68);
            if (uVar1 < uVar3) {
              uVar4 = FUN_10078cc70(local_68);
              puVar6[4] = uVar4;
              iVar2 = 0x50;
            }
            else {
              iVar2 = FUN_10078cc70(local_68);
              puVar6[3] = iVar2 + -0x50;
              puVar6[4] = 0;
              iVar2 = FUN_10078cc70(local_68);
            }
            iVar5 = FUN_1002a5a50(lVar7,0,puVar6,iVar2);
            if (iVar5 == iVar2) {
              *(int *)(lVar7 + 0x10) = iVar2;
              uVar8 = 1;
            }
            else {
              uVar8 = 0;
            }
          }
          else {
            uVar8 = 0;
          }
        }
        else {
          uVar8 = 0;
        }
      }
      else {
        uVar8 = 0;
      }
    }
    else {
      uVar8 = 0;
    }
    FUN_10078cf00(local_68);
  }
  else {
    uVar8 = 0;
  }
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_29 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1000395af;
    }
    QArrayData::deallocate(local_48,1,8);
  }
LAB_1000395af:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1000395df;
    }
    QArrayData::deallocate(local_40,1,8);
  }
LAB_1000395df:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return uVar8;
      }
      local_29 = 0;
    }
    QArrayData::deallocate(local_38,1,8);
  }
  return uVar8;
}


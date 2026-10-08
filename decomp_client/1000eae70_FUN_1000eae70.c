
void FUN_1000eae70(long param_1,uint param_2,QString *param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined8 *puVar5;
  QArrayData *pQVar6;
  QArrayData *local_98;
  QString local_90;
  QArrayData *local_88;
  QString local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  undefined1 local_58 [39];
  undefined1 local_31;
  
  uVar2 = *(uint *)(param_1 + 0x20);
  if ((((ulong)uVar2 != 0) && (uVar2 < param_2)) &&
     (iVar1 = FUN_100a68200(local_58,(ulong)uVar2 + param_1,param_2 - uVar2,0), iVar1 == 0)) {
    do {
      iVar1 = FUN_100a683a0(local_58);
      if (iVar1 < 0x2028) {
        if (((iVar1 == 0x200e) && (uVar2 = FUN_100a68390(local_58), param_4 != (undefined8 *)0x0))
           && (7 < uVar2)) {
          uVar3 = FUN_100a68370(local_58);
          *param_4 = uVar3;
        }
      }
      else {
        switch(iVar1) {
        case 0x2028:
          pcVar4 = (char *)FUN_100a68370(local_58);
          iVar1 = FUN_100a68390(local_58);
          if ((pcVar4 != (char *)0x0) && (iVar1 == -1)) {
            _strlen(pcVar4);
          }
          QString::fromUtf8_helper((char *)&local_68,(int)pcVar4);
          QString::normalized(&local_60,&local_68,1,0);
          FUN_1000341d0(param_3 + 2,&local_60);
          if (*(int *)local_60 != -1) {
            if (*(int *)local_60 != 0) {
              LOCK();
              *(int *)local_60 = *(int *)local_60 + -1;
              local_31 = *(int *)local_60 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1000eaffe;
            }
            QArrayData::deallocate(local_60,2,8);
          }
LAB_1000eaffe:
          if (*(int *)local_68 != -1) {
            pQVar6 = local_68;
            if (*(int *)local_68 != 0) {
              LOCK();
              *(int *)local_68 = *(int *)local_68 + -1;
              iVar1 = *(int *)local_68;
              UNLOCK();
joined_r0x0001000eb0eb:
              local_31 = iVar1 != 0;
              if ((bool)local_31) break;
            }
LAB_1000eb0f5:
            QArrayData::deallocate(pQVar6,2,8);
          }
          break;
        case 0x202a:
          pcVar4 = (char *)FUN_100a68370(local_58);
          iVar1 = FUN_100a68390(local_58);
          if ((pcVar4 != (char *)0x0) && (iVar1 == -1)) {
            _strlen(pcVar4);
          }
          QString::fromUtf8_helper((char *)&local_78,(int)pcVar4);
          QString::normalized(&local_70,&local_78,1,0);
          FUN_1000341d0(param_3 + 3,&local_70);
          if (*(int *)local_70 != -1) {
            if (*(int *)local_70 != 0) {
              LOCK();
              *(int *)local_70 = *(int *)local_70 + -1;
              local_31 = *(int *)local_70 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1000eb0c5;
            }
            QArrayData::deallocate(local_70,2,8);
          }
LAB_1000eb0c5:
          if (*(int *)local_78 != -1) {
            pQVar6 = local_78;
            if (*(int *)local_78 != 0) {
              LOCK();
              *(int *)local_78 = *(int *)local_78 + -1;
              iVar1 = *(int *)local_78;
              UNLOCK();
              goto joined_r0x0001000eb0eb;
            }
            goto LAB_1000eb0f5;
          }
          break;
        case 0x202b:
          uVar2 = FUN_100a68390(local_58);
          if ((param_5 != (undefined8 *)0x0) && (0x3f < uVar2)) {
            puVar5 = (undefined8 *)FUN_100a68370(local_58);
            param_5[7] = puVar5[7];
            param_5[6] = puVar5[6];
            param_5[5] = puVar5[5];
            param_5[4] = puVar5[4];
            param_5[3] = puVar5[3];
            param_5[2] = puVar5[2];
            uVar3 = *puVar5;
            param_5[1] = puVar5[1];
            *param_5 = uVar3;
          }
          break;
        case 0x202c:
          uVar2 = FUN_100a68390(local_58);
          if (7 < uVar2) {
            puVar5 = (undefined8 *)FUN_100a68370(local_58);
            param_3[6].field0_0x0 = (QTypedArrayData<unsigned_short> *)*puVar5;
          }
        }
      }
      iVar1 = FUN_100a682f0(local_58);
    } while (iVar1 == 0);
  }
  QString::fromUtf16((ushort *)&local_88,(int)param_1 + 0x28);
  QString::normalized(&local_80,&local_88,0,0);
  QString::operator=(param_3,&local_80);
  if (*(int *)local_80.field0_0x0 != -1) {
    if (*(int *)local_80.field0_0x0 != 0) {
      LOCK();
      *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + -1;
      local_31 = *(int *)local_80.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000eb20f;
    }
    QArrayData::deallocate((QArrayData *)local_80.field0_0x0,2,8);
  }
LAB_1000eb20f:
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_31 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000eb23f;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_1000eb23f:
  QString::fromUtf16((ushort *)&local_98,(int)param_1 + 0x232);
  QString::normalized(&local_90,&local_98,0,0);
  QString::operator=(param_3 + 1,&local_90);
  if (*(int *)local_90.field0_0x0 != -1) {
    if (*(int *)local_90.field0_0x0 != 0) {
      LOCK();
      *(int *)local_90.field0_0x0 = *(int *)local_90.field0_0x0 + -1;
      local_31 = *(int *)local_90.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000eb2b6;
    }
    QArrayData::deallocate((QArrayData *)local_90.field0_0x0,2,8);
  }
LAB_1000eb2b6:
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_31 = *(int *)local_98 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000eb2ec;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_1000eb2ec:
  uVar2 = *(uint *)(param_1 + 0x24);
  *(byte *)&param_3[5].field0_0x0 = (byte)uVar2 >> 2 & 1;
  if ((uVar2 & 0x100) == 0) {
    uVar3 = FUN_1000eb630(param_1 + 0x64e,uVar2);
    FUN_1000e4bf0(param_3 + 4,uVar3);
  }
  FUN_1000e2540(param_3 + 1,param_3 + 3);
  return;
}


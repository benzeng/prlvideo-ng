
bool FUN_100a412e0(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,QString *param_6,QString *param_7,undefined8 param_8)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  QArrayData *pQVar5;
  QArrayData *local_b8;
  QArrayData *local_b0;
  QArrayData *local_a8;
  QString local_a0;
  QArrayData *local_98;
  QString local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  undefined1 local_58 [39];
  undefined1 local_31;
  
  lVar1 = *param_2;
  iVar2 = FUN_100a68200(local_58,*(long *)(lVar1 + 0x10) + lVar1,*(undefined4 *)(lVar1 + 4),0);
  if (iVar2 == 0) {
    do {
      uVar3 = FUN_100a683a0(local_58);
      switch(uVar3) {
      case 0x200a:
        iVar2 = FUN_100a68370(local_58);
        FUN_100a68390(local_58);
        QString::fromUtf16((ushort *)&local_68,iVar2);
        QString::normalized(&local_60,&local_68,1,0);
        FUN_1000341d0(param_3,&local_60);
        if (*(int *)local_60 != -1) {
          if (*(int *)local_60 != 0) {
            LOCK();
            *(int *)local_60 = *(int *)local_60 + -1;
            local_31 = *(int *)local_60 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100a41442;
          }
          QArrayData::deallocate(local_60,2,8);
        }
LAB_100a41442:
        if (*(int *)local_68 != -1) {
          pQVar5 = local_68;
          if (*(int *)local_68 == 0) goto LAB_100a417ec;
          LOCK();
          *(int *)local_68 = *(int *)local_68 + -1;
          iVar2 = *(int *)local_68;
          UNLOCK();
joined_r0x000100a41678:
          local_31 = iVar2 != 0;
          if (!(bool)local_31) goto LAB_100a417ec;
        }
        break;
      case 0x200b:
        iVar2 = FUN_100a68370(local_58);
        FUN_100a68390(local_58);
        QString::fromUtf16((ushort *)&local_78,iVar2);
        QString::normalized(&local_70,&local_78,1,0);
        FUN_1000341d0(param_4,&local_70);
        if (*(int *)local_70 != -1) {
          if (*(int *)local_70 != 0) {
            LOCK();
            *(int *)local_70 = *(int *)local_70 + -1;
            local_31 = *(int *)local_70 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100a414ed;
          }
          QArrayData::deallocate(local_70,2,8);
        }
LAB_100a414ed:
        if (*(int *)local_78 != -1) {
          pQVar5 = local_78;
          if (*(int *)local_78 == 0) goto LAB_100a417ec;
          LOCK();
          *(int *)local_78 = *(int *)local_78 + -1;
          iVar2 = *(int *)local_78;
          UNLOCK();
          goto joined_r0x000100a41678;
        }
        break;
      case 0x200c:
        iVar2 = FUN_100a68370(local_58);
        FUN_100a68390(local_58);
        QString::fromUtf16((ushort *)&local_88,iVar2);
        QString::normalized(&local_80,&local_88,1,0);
        FUN_1000341d0(param_5,&local_80);
        if (*(int *)local_80 != -1) {
          if (*(int *)local_80 != 0) {
            LOCK();
            *(int *)local_80 = *(int *)local_80 + -1;
            local_31 = *(int *)local_80 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100a41598;
          }
          QArrayData::deallocate(local_80,2,8);
        }
LAB_100a41598:
        if (*(int *)local_88 != -1) {
          pQVar5 = local_88;
          if (*(int *)local_88 == 0) goto LAB_100a417ec;
          LOCK();
          *(int *)local_88 = *(int *)local_88 + -1;
          iVar2 = *(int *)local_88;
          UNLOCK();
          goto joined_r0x000100a41678;
        }
        break;
      case 0x200d:
        iVar2 = FUN_100a68370(local_58);
        FUN_100a68390(local_58);
        QString::fromUtf16((ushort *)&local_98,iVar2);
        QString::normalized(&local_90,&local_98,1,0);
        QString::operator=(param_6,&local_90);
        if (*(int *)local_90.field0_0x0 != -1) {
          if (*(int *)local_90.field0_0x0 != 0) {
            LOCK();
            *(int *)local_90.field0_0x0 = *(int *)local_90.field0_0x0 + -1;
            local_31 = *(int *)local_90.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100a41652;
          }
          QArrayData::deallocate((QArrayData *)local_90.field0_0x0,2,8);
        }
LAB_100a41652:
        if (*(int *)local_98 != -1) {
          pQVar5 = local_98;
          if (*(int *)local_98 == 0) goto LAB_100a417ec;
          LOCK();
          *(int *)local_98 = *(int *)local_98 + -1;
          iVar2 = *(int *)local_98;
          UNLOCK();
          goto joined_r0x000100a41678;
        }
        break;
      case 0x200e:
        iVar2 = FUN_100a68370(local_58);
        FUN_100a68390(local_58);
        QString::fromUtf16((ushort *)&local_a8,iVar2);
        QString::normalized(&local_a0,&local_a8,1,0);
        QString::operator=(param_7,&local_a0);
        if (*(int *)local_a0.field0_0x0 != -1) {
          if (*(int *)local_a0.field0_0x0 != 0) {
            LOCK();
            *(int *)local_a0.field0_0x0 = *(int *)local_a0.field0_0x0 + -1;
            local_31 = *(int *)local_a0.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100a4170f;
          }
          QArrayData::deallocate((QArrayData *)local_a0.field0_0x0,2,8);
        }
LAB_100a4170f:
        if (*(int *)local_a8 != -1) {
          pQVar5 = local_a8;
          if (*(int *)local_a8 != 0) {
            LOCK();
            *(int *)local_a8 = *(int *)local_a8 + -1;
            iVar2 = *(int *)local_a8;
            UNLOCK();
joined_r0x000100a417e3:
            local_31 = iVar2 != 0;
            if ((bool)local_31) break;
          }
LAB_100a417ec:
          QArrayData::deallocate(pQVar5,2,8);
        }
        break;
      case 0x200f:
        iVar2 = FUN_100a68370(local_58);
        FUN_100a68390(local_58);
        QString::fromUtf16((ushort *)&local_b8,iVar2);
        QString::normalized(&local_b0,&local_b8,1,0);
        FUN_1000341d0(param_8,&local_b0);
        if (*(int *)local_b0 != -1) {
          if (*(int *)local_b0 != 0) {
            LOCK();
            *(int *)local_b0 = *(int *)local_b0 + -1;
            local_31 = *(int *)local_b0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100a417c5;
          }
          QArrayData::deallocate(local_b0,2,8);
        }
LAB_100a417c5:
        if (*(int *)local_b8 != -1) {
          pQVar5 = local_b8;
          if (*(int *)local_b8 != 0) {
            LOCK();
            *(int *)local_b8 = *(int *)local_b8 + -1;
            iVar2 = *(int *)local_b8;
            UNLOCK();
            goto joined_r0x000100a417e3;
          }
          goto LAB_100a417ec;
        }
        break;
      default:
        if (0 < DAT_10230ffd0) {
          uVar3 = FUN_100a683a0(local_58);
          uVar4 = FUN_100a68390(local_58);
          FUN_100df99c0("SIATOOL","SIAToolClient",1,"Unknown MAPI request command %d (size %d)",
                        uVar3,uVar4);
        }
      }
      iVar2 = FUN_100a682f0(local_58);
    } while (iVar2 == 0);
  }
  return iVar2 == -7;
}


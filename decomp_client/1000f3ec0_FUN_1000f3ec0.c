
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_1000f3ec0(void)

{
  QString *this;
  long *plVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  int *piVar7;
  char *pcVar8;
  QString QVar9;
  long in_R8;
  QString *in_R9;
  long *local_a0;
  QString local_98;
  QString local_90;
  QString local_88;
  QString local_80;
  QArrayData *local_78;
  QString local_70;
  QArrayData *local_68;
  QString local_60;
  undefined1 local_58 [39];
  undefined1 local_31;
  
  *(undefined4 *)&in_R9[7].field0_0x0 = 0;
  iVar4 = FUN_100a68200(local_58);
  this = in_R9 + 1;
  do {
    if (iVar4 == -7) {
      if (((in_R8 != 0) && (FUN_1000f8c40(&local_a0,in_R8,in_R9 + 3), local_a0 != (long *)0x0)) &&
         (((QString *)local_a0[2] == (QString *)0x0 ||
          (QString::operator=(in_R9 + 10,(QString *)local_a0[2]), local_a0 != (long *)0x0)))) {
        LOCK();
        plVar1 = local_a0 + 1;
        lVar2 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar2 == 1) {
          (**(code **)(*local_a0 + 0x10))();
        }
      }
      return 0;
    }
    if (iVar4 != 0) {
      if (DAT_10230ffd0 < 1) {
        return 6;
      }
      FUN_100df99c0("SGAC","prl_client_app",1,"Bitbox parsing error %i",iVar4);
      return 6;
    }
    piVar7 = (int *)FUN_100a68370(local_58);
    uVar5 = FUN_100a68390(local_58);
    uVar6 = FUN_100a683a0(local_58);
    iVar4 = (int)piVar7;
    switch(uVar6) {
    case 0x2002:
      if ((piVar7 != (int *)0x0) && (uVar5 == 0xffffffff)) {
        _strlen((char *)piVar7);
      }
      QString::fromUtf8_helper((char *)&local_78,iVar4);
      QString::normalized(&local_70,&local_78,1,0);
      QString::operator=(this,&local_70);
      if (*(int *)local_70.field0_0x0 != -1) {
        if (*(int *)local_70.field0_0x0 != 0) {
          LOCK();
          *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
          local_31 = *(int *)local_70.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1000f4011;
        }
        QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
      }
LAB_1000f4011:
      if (*(int *)local_78 != -1) {
        if (*(int *)local_78 != 0) {
          LOCK();
          *(int *)local_78 = *(int *)local_78 + -1;
          local_31 = *(int *)local_78 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1000f4041;
        }
        QArrayData::deallocate(local_78,2,8);
      }
LAB_1000f4041:
      QString::replace(this,0x5c,0x2f,1);
      while( true ) {
        cVar3 = QString::startsWith(this,0x2f,1);
        if (cVar3 == '\0') break;
        QString::remove((int)this,0);
      }
      while (cVar3 = QString::endsWith(this,0x2f,1), cVar3 != '\0') {
        QString::chop((int)this);
      }
      break;
    case 0x2003:
      if ((piVar7 != (int *)0x0) && (uVar5 == 0xffffffff)) {
        _strlen((char *)piVar7);
      }
      QString::fromUtf8_helper((char *)&local_68,iVar4);
      QString::normalized(&local_60,&local_68,1,0);
      QString::operator=(in_R9,&local_60);
      if (*(int *)local_60.field0_0x0 != -1) {
        if (*(int *)local_60.field0_0x0 != 0) {
          LOCK();
          *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
          local_31 = *(int *)local_60.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1000f4177;
        }
        QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
      }
LAB_1000f4177:
      if (*(int *)local_68 != -1) {
        QVar9.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_68;
        if (*(int *)local_68 != 0) {
          LOCK();
          *(int *)local_68 = *(int *)local_68 + -1;
          iVar4 = *(int *)local_68;
          UNLOCK();
          goto joined_r0x0001000f4346;
        }
LAB_1000f4353:
        QArrayData::deallocate((QArrayData *)QVar9.field0_0x0,2,8);
      }
      break;
    case 0x2004:
      if ((piVar7 != (int *)0x0) && (uVar5 == 0xffffffff)) {
        _strlen((char *)piVar7);
      }
      QString::fromUtf8_helper((char *)&local_88,iVar4);
      QString::operator=(in_R9 + 3,&local_88);
      if (*(int *)local_88.field0_0x0 != -1) {
        QVar9.field0_0x0 = local_88.field0_0x0;
        if (*(int *)local_88.field0_0x0 == 0) goto LAB_1000f4353;
        LOCK();
        *(int *)local_88.field0_0x0 = *(int *)local_88.field0_0x0 + -1;
        iVar4 = *(int *)local_88.field0_0x0;
        UNLOCK();
joined_r0x0001000f4346:
        local_31 = iVar4 != 0;
        if (!(bool)local_31) goto LAB_1000f4353;
      }
      break;
    case 0x2005:
      if ((piVar7 != (int *)0x0) && (uVar5 == 0xffffffff)) {
        _strlen((char *)piVar7);
      }
      QString::fromUtf8_helper((char *)&local_90,iVar4);
      QString::operator=(in_R9 + 4,&local_90);
      if (*(int *)local_90.field0_0x0 != -1) {
        QVar9.field0_0x0 = local_90.field0_0x0;
        if (*(int *)local_90.field0_0x0 != 0) {
          LOCK();
          *(int *)local_90.field0_0x0 = *(int *)local_90.field0_0x0 + -1;
          iVar4 = *(int *)local_90.field0_0x0;
          UNLOCK();
          goto joined_r0x0001000f4346;
        }
        goto LAB_1000f4353;
      }
      break;
    default:
      if (1 < DAT_10230ffd0) {
        FUN_100df99c0("SGAC","prl_client_app",2,"Unsupported data skipped, type=%u, size=%u",uVar6,
                      uVar5);
      }
      break;
    case 0x2007:
      if ((piVar7 != (int *)0x0) && (uVar5 == 0xffffffff)) {
        _strlen((char *)piVar7);
      }
      QString::fromUtf8_helper((char *)&local_80,iVar4);
      QString::operator=(in_R9 + 2,&local_80);
      if (*(int *)local_80.field0_0x0 != -1) {
        QVar9.field0_0x0 = local_80.field0_0x0;
        if (*(int *)local_80.field0_0x0 != 0) {
          LOCK();
          *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + -1;
          iVar4 = *(int *)local_80.field0_0x0;
          UNLOCK();
          goto joined_r0x0001000f4346;
        }
        goto LAB_1000f4353;
      }
      break;
    case 0x2008:
      if ((piVar7 != (int *)0x0) && (uVar5 == 0xffffffff)) {
        _strlen((char *)piVar7);
      }
      QString::fromUtf8_helper((char *)&local_98,iVar4);
      QString::operator=(in_R9 + 5,&local_98);
      if (*(int *)local_98.field0_0x0 != -1) {
        QVar9.field0_0x0 = local_98.field0_0x0;
        if (*(int *)local_98.field0_0x0 != 0) {
          LOCK();
          *(int *)local_98.field0_0x0 = *(int *)local_98.field0_0x0 + -1;
          iVar4 = *(int *)local_98.field0_0x0;
          UNLOCK();
          goto joined_r0x0001000f4346;
        }
        goto LAB_1000f4353;
      }
      break;
    case 0x2009:
    case 0x200a:
    case 0x200b:
      break;
    case 0x200c:
      if (uVar5 < 4) {
        if (0 < DAT_10230ffd0) {
          pcVar8 = "Item kind: bad data size %u";
LAB_1000f442d:
          FUN_100df99c0("SGAC","prl_client_app",1,pcVar8,uVar5);
        }
      }
      else {
        *(int *)&in_R9[7].field0_0x0 = *piVar7;
      }
      break;
    case 0x200d:
      if (uVar5 < 8) {
        if (0 < DAT_10230ffd0) {
          pcVar8 = "Item modifyTime: bad data size %u";
          goto LAB_1000f442d;
        }
      }
      else {
        in_R9[8].field0_0x0 = *(QTypedArrayData<unsigned_short> **)piVar7;
      }
      break;
    case 0x2012:
      if (3 < uVar5) {
        *(uint *)&in_R9[0xb].field0_0x0 = *piVar7 * 2 & 2;
      }
      break;
    case 0x2014:
      FUN_100ab76e0(in_R9 + 6,piVar7,uVar5);
    }
    iVar4 = FUN_100a682f0(local_58);
  } while( true );
}


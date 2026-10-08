
QByteArray * FUN_1009c7770(QByteArray *param_1,long *param_2,long *param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  QArrayData *local_48;
  char *local_40;
  undefined1 local_31;
  
  FUN_100caec90();
  FUN_100c96b50();
  FUN_100c6f640();
  uVar2 = FUN_100c98d50();
  lVar6 = *param_2;
  uVar3 = FUN_100c59870(*(long *)(lVar6 + 0x10) + lVar6,*(undefined4 *)(lVar6 + 4));
  lVar6 = *param_3;
  uVar4 = FUN_100c59870(*(long *)(lVar6 + 0x10) + lVar6,*(undefined4 *)(lVar6 + 4));
  uVar5 = FUN_100c59860();
  uVar5 = FUN_100c58530(uVar5);
  lVar6 = FUN_100c9a4d0(uVar3,0);
  if (lVar6 == 0) {
    FUN_100df99c0("","MacAppStore",0,"Wrong PKCS7 format\n");
  }
  lVar7 = FUN_100c9a3d0(uVar4,0);
  if (lVar7 == 0) {
    FUN_100df99c0("","MacAppStore",0,"Wrong X509 format\n");
  }
  FUN_100c99440(uVar2,lVar7);
  iVar1 = FUN_100cb1860(lVar6,0,uVar2,0,uVar5,0x20);
  *(undefined **)param_1 = PTR_shared_null_1021e1288;
  if (iVar1 == 1) {
    local_40 = (char *)0x0;
    iVar1 = FUN_100c58d60(uVar5,3,0,&local_40);
    QByteArray::QByteArray((QByteArray *)&local_48,local_40,iVar1);
    QByteArray::operator=(param_1,(QByteArray *)&local_48);
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_31 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1009c7916;
      }
      QArrayData::deallocate(local_48,1,8);
    }
  }
  else {
    uVar8 = FUN_100c63310();
    uVar8 = FUN_100c63f00(uVar8,0);
    FUN_100df99c0("","MacAppStore",0,"%s\n",uVar8);
  }
LAB_1009c7916:
  FUN_100c98e90(uVar2);
  FUN_100cad760(lVar6);
  FUN_100c7cd70(lVar7);
  FUN_100c586e0(uVar5);
  FUN_100c586e0(uVar4);
  FUN_100c586e0(uVar3);
  FUN_100c6bd70();
  return param_1;
}


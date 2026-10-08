
void FUN_1000a2280(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  undefined4 uVar1;
  undefined8 uVar2;
  uint *puVar3;
  QArrayData *local_a8;
  QArrayData *local_a0;
  QArrayData *local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  undefined1 local_78 [32];
  undefined1 local_58 [32];
  int local_38;
  undefined1 local_31;
  
  local_38 = param_2;
  if (param_2 == 0) {
    uVar2 = FUN_1000a4ac0();
    puVar3 = (uint *)*param_5;
    if (1 < *puVar3) {
      FUN_10003cb70(param_5,puVar3[1]);
      puVar3 = (uint *)*param_5;
    }
    FUN_1000a5920(uVar2,param_3,*(long *)(puVar3 + (long)(int)puVar3[2] * 2 + 4) + 8,param_4);
  }
  FUN_1000a3d00(local_58,0);
  uVar2 = FUN_1000a4ac0();
  FUN_1000a5660(local_78,uVar2,param_3);
  QString::toUtf8();
  QByteArray::QByteArray((QByteArray *)&local_80,(char *)(local_88 + *(long *)(local_88 + 0x10)),-1)
  ;
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_31 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000a234f;
    }
    QArrayData::deallocate(local_88,1,8);
  }
LAB_1000a234f:
  FUN_1000a3be0(local_58,local_80 + *(long *)(local_80 + 0x10),*(undefined4 *)(local_80 + 4),0x200d)
  ;
  if (1 < *(uint *)*param_5) {
    FUN_10003cb70(param_5,((uint *)*param_5)[1]);
  }
  QString::toUtf8();
  QByteArray::QByteArray((QByteArray *)&local_90,(char *)(local_98 + *(long *)(local_98 + 0x10)),-1)
  ;
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_31 = *(int *)local_98 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000a23ec;
    }
    QArrayData::deallocate(local_98,1,8);
  }
LAB_1000a23ec:
  FUN_1000a3be0(local_58,local_90 + *(long *)(local_90 + 0x10),*(undefined4 *)(local_90 + 4),0x2016)
  ;
  if (1 < *(uint *)*param_5) {
    FUN_10003cb70(param_5,((uint *)*param_5)[1]);
  }
  QString::toUtf8();
  QByteArray::QByteArray((QByteArray *)&local_a0,(char *)(local_a8 + *(long *)(local_a8 + 0x10)),-1)
  ;
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_31 = *(int *)local_a8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000a248c;
    }
    QArrayData::deallocate(local_a8,1,8);
  }
LAB_1000a248c:
  FUN_1000a3be0(local_58,local_a0 + *(long *)(local_a0 + 0x10),*(undefined4 *)(local_a0 + 4),0x2017)
  ;
  FUN_1000a3be0(local_58,&local_38,4,0x2001);
  uVar2 = FUN_100a67f30(local_58);
  uVar1 = FUN_100a67f40(local_58);
  FUN_1000a2110(param_1,1,3,uVar2,uVar1);
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_31 = *(int *)local_a0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000a2525;
    }
    QArrayData::deallocate(local_a0,1,8);
  }
LAB_1000a2525:
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_31 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000a255b;
    }
    QArrayData::deallocate(local_90,1,8);
  }
LAB_1000a255b:
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_31 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000a258b;
    }
    QArrayData::deallocate(local_80,1,8);
  }
LAB_1000a258b:
  FUN_1000a3d70(local_78);
  FUN_100a681d0(local_58);
  return;
}


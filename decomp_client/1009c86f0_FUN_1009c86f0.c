
QByteArray * FUN_1009c86f0(QByteArray *param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 ***pppuVar3;
  QArrayData *local_78;
  QArrayData *local_70 [2];
  char local_60 [16];
  undefined8 **local_50;
  undefined8 **local_48;
  undefined8 local_40;
  undefined1 local_31;
  
  puVar1 = PTR_shared_null_1021e1288;
  *(undefined **)param_1 = PTR_shared_null_1021e1288;
  local_40 = 0;
  local_50 = &local_50;
  local_48 = &local_50;
  FUN_100b46a70(&local_50,0,0);
  if (((undefined8 ***)local_48 != &local_50) && (*(int *)(puVar1 + 4) == 0)) {
    pppuVar3 = (undefined8 ***)local_48;
    do {
      FUN_100b469a0(local_70,pppuVar3 + 2);
      iVar2 = QString::compare_helper
                        (local_70[0] + *(long *)(local_70[0] + 0x10),
                         *(undefined4 *)(local_70[0] + 4),"en0",0xffffffff,1);
      if (iVar2 == 0) {
        QByteArray::QByteArray((QByteArray *)&local_78,local_60,6);
        QByteArray::operator=(param_1,(QByteArray *)&local_78);
        if (*(int *)local_78 != -1) {
          if (*(int *)local_78 != 0) {
            LOCK();
            *(int *)local_78 = *(int *)local_78 + -1;
            local_31 = *(int *)local_78 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1009c87e0;
          }
          QArrayData::deallocate(local_78,1,8);
        }
      }
LAB_1009c87e0:
      if (*(int *)local_70[0] != -1) {
        if (*(int *)local_70[0] != 0) {
          LOCK();
          *(int *)local_70[0] = *(int *)local_70[0] + -1;
          local_31 = *(int *)local_70[0] != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1009c8810;
        }
        QArrayData::deallocate(local_70[0],2,8);
      }
LAB_1009c8810:
      pppuVar3 = (undefined8 ***)pppuVar3[1];
    } while ((pppuVar3 != &local_50) && (*(int *)(*(long *)param_1 + 4) == 0));
  }
  FUN_100b3d5f0(&local_50);
  return param_1;
}


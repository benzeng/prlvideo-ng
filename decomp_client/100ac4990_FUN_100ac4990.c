
void FUN_100ac4990(long param_1,undefined8 param_2,int *param_3)

{
  int iVar1;
  undefined8 uVar2;
  QArrayData *local_30;
  undefined1 local_22;
  
  iVar1 = *param_3;
  if (iVar1 < 0xc) {
    if (iVar1 == 4) {
      FUN_100ac4fe0(param_1,param_3[8],param_3[10],
                    *(long *)(param_3 + 0xe) << 0x20 | (ulong)(uint)param_3[0xc]);
      return;
    }
  }
  else if (iVar1 < 0x11) {
    if (iVar1 == 0xc) {
      FUN_100ac4b50(param_1,param_2,param_3);
      return;
    }
  }
  else {
    switch(iVar1) {
    case 0x11:
      FUN_100ac4d00(param_1,param_3);
      return;
    case 0x12:
      QByteArray::QByteArray((QByteArray *)&local_30,(char *)(param_3 + 0x14),param_3[2] + -0x50);
      FUN_100ada210(param_1 + 0x9c0,(QByteArray *)&local_30,param_3[10] != 0);
      if (*(int *)local_30 != -1) {
        if (*(int *)local_30 != 0) {
          LOCK();
          *(int *)local_30 = *(int *)local_30 + -1;
          UNLOCK();
          if (*(int *)local_30 != 0) {
            return;
          }
          local_22 = 0;
        }
        QArrayData::deallocate(local_30,1,8);
      }
      return;
    case 0x16:
      FUN_100ac50f0(param_1,param_2,param_3);
      return;
    case 0x18:
      uVar2 = FUN_100319cd0(*(undefined8 *)(param_1 + 0x20));
      FUN_100346fc0(uVar2,param_2);
      return;
    }
  }
  FUN_100ad6500(param_1,param_2,param_3);
  return;
}


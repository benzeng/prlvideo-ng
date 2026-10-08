
void FUN_100047600(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  QArrayData *pQVar4;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined *local_38;
  undefined1 local_29;
  
  local_38 = PTR_shared_null_1021e15e8;
  uVar2 = FUN_100152280();
  lVar3 = FUN_1001548f0(uVar2,param_1 + 0x10);
  if (lVar3 != 0) {
    iVar1 = FUN_10018f860(lVar3);
    if (iVar1 == 9) {
      pQVar4 = (QArrayData *)QString::fromAscii_helper("Parallels Linux application",0x1b);
      local_40 = pQVar4;
      FUN_1000341d0(&local_38,&local_40);
      if (*(int *)pQVar4 != -1) {
        if (*(int *)pQVar4 != 0) {
          LOCK();
          *(int *)pQVar4 = *(int *)pQVar4 + -1;
          local_29 = *(int *)pQVar4 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_1000476f0;
        }
        QArrayData::deallocate(pQVar4,2,8);
      }
      goto LAB_1000476f0;
    }
  }
  pQVar4 = (QArrayData *)QString::fromAscii_helper("Parallels Windows application",0x1d);
  local_48 = pQVar4;
  FUN_1000341d0(&local_38,&local_48);
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      local_29 = *(int *)pQVar4 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1000476f0;
    }
    QArrayData::deallocate(pQVar4,2,8);
  }
LAB_1000476f0:
  FUN_100df2ca0(param_2,&local_38);
  FUN_100039a80(&local_38);
  return;
}


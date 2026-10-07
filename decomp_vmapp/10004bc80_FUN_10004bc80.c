
undefined4 FUN_10004bc80(long param_1,QByteArray *param_2)

{
  long lVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  char *pcVar6;
  QArrayData *local_88;
  undefined4 local_7c;
  undefined1 local_78 [32];
  undefined1 local_58 [39];
  undefined1 local_31;
  
  QMutex::lock();
  FUN_10004e310(local_58,0);
  lVar1 = *(long *)(param_1 + 0x138);
  if ((*(long *)(lVar1 + 0x10) != 0) && (lVar5 = *(long *)(lVar1 + 0x20), lVar5 != lVar1 + 8)) {
    do {
      FUN_10004e310(local_78,0);
      local_7c = *(undefined4 *)(lVar5 + 0x18);
      FUN_10004dee0(local_78,&local_7c,4,0x200b);
      lVar1 = *(long *)(lVar5 + 0x20);
      FUN_10004dee0(local_78,*(long *)(lVar1 + 0x10) + lVar1,*(undefined4 *)(lVar1 + 4),0x200c);
      uVar4 = FUN_10078cc60(local_78);
      uVar2 = FUN_10078cc70(local_78);
      FUN_10004dee0(local_58,uVar4,uVar2,0x200a);
      FUN_10078cf00(local_78);
      lVar5 = QMapNodeBase::nextNode();
    } while (lVar5 != *(long *)(param_1 + 0x138) + 8);
  }
  pcVar6 = (char *)FUN_10078cc60(local_58);
  iVar3 = FUN_10078cc70(local_58);
  QByteArray::QByteArray((QByteArray *)&local_88,pcVar6,iVar3);
  QByteArray::operator=(param_2,(QByteArray *)&local_88);
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_31 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10004bdd1;
    }
    QArrayData::deallocate(local_88,1,8);
  }
LAB_10004bdd1:
  FUN_10078cf00(local_58);
  uVar2 = *(undefined4 *)(param_1 + 0x130);
  QMutex::unlock();
  return uVar2;
}


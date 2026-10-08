
int FUN_1009bdd50(void)

{
  char cVar1;
  char *pcVar2;
  size_t sVar3;
  char *pcVar4;
  int iVar5;
  uint uVar6;
  QArrayData *local_28;
  undefined1 local_1a;
  
  iVar5 = DAT_102273f08;
  if (DAT_102273f08 == 0) {
    pcVar2 = (char *)QMetaType::typeName(2);
    iVar5 = 0;
    if (pcVar2 != (char *)0x0) {
      sVar3 = _strlen(pcVar2);
      iVar5 = (int)sVar3;
    }
    local_28 = (QArrayData *)PTR_shared_null_1021e1288;
    if (((uint)*(undefined8 *)PTR_shared_null_1021e1288 < 2) &&
       (iVar5 + 10U <= (*(uint *)(PTR_shared_null_1021e1288 + 8) & 0x7fffffff))) {
      *(uint *)(PTR_shared_null_1021e1288 + 8) =
           *(uint *)(PTR_shared_null_1021e1288 + 8) | 0x80000000;
    }
    else {
      uVar6 = (uint)((ulong)*(undefined8 *)PTR_shared_null_1021e1288 >> 0x20);
      if (uVar6 < iVar5 + 9U) {
        uVar6 = iVar5 + 9U;
      }
      QByteArray::reallocData(&local_28,uVar6 + 1,1);
    }
    cVar1 = QByteArray::append((char *)&local_28,0x1dbc19c);
    pcVar4 = (char *)QByteArray::append(cVar1);
    QByteArray::append(pcVar4,(int)pcVar2);
    cVar1 = QByteArray::endsWith((char)&local_28);
    if (cVar1 != '\0') {
      QByteArray::append((char)&local_28);
    }
    QByteArray::append((char)&local_28);
    iVar5 = QMetaType::registerNormalizedType(&local_28,FUN_1003e6e00,FUN_1003e6e40,8,0x107,0);
    if (0 < iVar5) {
      FUN_1003e6ed0(iVar5);
    }
    DAT_102273f08 = iVar5;
    if (*(int *)local_28 != -1) {
      if (*(int *)local_28 != 0) {
        LOCK();
        *(int *)local_28 = *(int *)local_28 + -1;
        UNLOCK();
        if (*(int *)local_28 != 0) {
          return iVar5;
        }
        local_1a = 0;
      }
      QArrayData::deallocate(local_28,1,8);
    }
  }
  return iVar5;
}


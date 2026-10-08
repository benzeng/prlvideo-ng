
bool FUN_10005db40(undefined8 param_1,uint param_2)

{
  undefined *puVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  uint uVar5;
  QArrayData *local_30;
  undefined1 local_23;
  undefined1 local_22;
  
  puVar1 = PTR__OBJC_CLASS___NSString_10226a7c8;
  FUN_10005c440();
  if ((*(int *)((long)DAT_102311dd8 + 0x14) != 0) && (*(uint *)(DAT_102311dd8 + 4) != 0)) {
    uVar5 = *(uint *)((long)DAT_102311dd8 + 0x24) ^ param_2;
    for (puVar3 = *(undefined8 **)
                   (DAT_102311dd8[1] + ((ulong)uVar5 % (ulong)*(uint *)(DAT_102311dd8 + 4)) * 8);
        puVar3 != DAT_102311dd8; puVar3 = (undefined8 *)*puVar3) {
      if ((*(uint *)(puVar3 + 1) == uVar5) && (*(uint *)((long)puVar3 + 0xc) == param_2)) {
        if (puVar3 != DAT_102311dd8) {
          local_30 = (QArrayData *)puVar3[2];
          if (1 < *(int *)local_30 + 1U) {
            LOCK();
            *(int *)local_30 = *(int *)local_30 + 1;
            local_23 = *(int *)local_30 != 0;
            UNLOCK();
          }
          goto LAB_10005dbcd;
        }
        break;
      }
    }
  }
  local_30 = (QArrayData *)PTR_shared_null_1021e1288;
LAB_10005dbcd:
  uVar4 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (puVar1,PTR_s_stringWithQString__102268d00,&local_30);
  cVar2 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_isEqualToString__102268f68,uVar4);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) goto LAB_10005dc26;
      local_22 = 0;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_10005dc26:
  return cVar2 != '\0';
}


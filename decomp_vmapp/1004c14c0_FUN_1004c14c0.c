
undefined8 FUN_1004c14c0(undefined8 param_1,long param_2)

{
  undefined4 uVar1;
  int iVar2;
  char cVar3;
  byte bVar4;
  long lVar5;
  undefined4 *puVar6;
  void *pvVar7;
  QArrayData *local_38;
  undefined1 local_2a;
  
  if (*(ushort *)(param_2 + 0x14) < 0x80c) {
    return 0xf0000003;
  }
  lVar5 = FUN_1002a6010(param_2);
  uVar1 = *(undefined4 *)(lVar5 + 4);
  puVar6 = (undefined4 *)FUN_1002a6010(param_2);
  ___bzero(puVar6,0x80c);
  if (*(long *)(DAT_1011c3698 + 0x110) == 0) {
    if (0 < DAT_1011b55f8) {
      FUN_1008e3970("","SharedProfileHost",1,"Configuration is not available");
    }
  }
  else {
    CVmConfiguration::getVmSettings();
    CVmSettings::getVmTools();
    CVmTools::getVmSharedProfile();
    cVar3 = CVmSharedProfile::isEnabled();
    if ((cVar3 != '\0') && (cVar3 = FUN_1004c1c80(), cVar3 != '\0')) {
      bVar4 = FUN_1004c1dc0();
      puVar6[1] = (uint)bVar4;
      puVar6[2] = 0;
      if (bVar4 == 0) {
        return 0;
      }
      local_38 = (QArrayData *)PTR_shared_null_100ba20d0;
      cVar3 = FUN_10050fa80(uVar1,&local_38,0);
      if (cVar3 == '\0') {
        *puVar6 = 2;
      }
      else {
        QString::replace(&local_38,0x2f,0x5c,1);
        iVar2 = *(int *)(local_38 + 4);
        if ((uint)(iVar2 * 2) < 0x800) {
          pvVar7 = (void *)QString::utf16();
          _memcpy(puVar6 + 3,pvVar7,(ulong)(uint)(iVar2 * 2));
          *puVar6 = 0;
        }
        else {
          *puVar6 = 3;
        }
      }
      if (*(int *)local_38 == -1) {
        return 0;
      }
      if (*(int *)local_38 != 0) {
        LOCK();
        *(int *)local_38 = *(int *)local_38 + -1;
        UNLOCK();
        if (*(int *)local_38 != 0) {
          return 0;
        }
        local_2a = 0;
      }
      QArrayData::deallocate(local_38,2,8);
      return 0;
    }
  }
  puVar6[1] = 0;
  puVar6[2] = 0;
  return 0;
}


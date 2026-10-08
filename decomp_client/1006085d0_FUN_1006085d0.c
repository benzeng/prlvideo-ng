
void FUN_1006085d0(undefined4 param_1,int param_2)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  void *pvVar4;
  QUrl local_c0 [8];
  int *local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  Data_conflict local_98;
  undefined4 local_90;
  undefined1 local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  char local_70 [71];
  undefined1 local_29;
  
  uVar2 = FUN_100152280();
  lVar3 = FUN_100154790(uVar2,0);
  if ((param_2 == 2) || (lVar3 == 0)) goto LAB_1006086a7;
  uVar2 = FUN_100152280();
  uVar2 = FUN_100154790(uVar2,0);
  uVar2 = FUN_10016f500(uVar2);
  cVar1 = FUN_10061b4d0(uVar2,0x80);
  if (cVar1 != '\0') goto LAB_1006086a7;
  uVar2 = FUN_100748240();
  local_78 = (QArrayData *)QString::fromAscii_helper("desktop.mac",0xb);
  uVar2 = FUN_100748290(uVar2,&local_78);
  FUN_100746ae0(local_70,uVar2);
  FUN_10012ac30(local_70);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_29 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1006086a3;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_1006086a3:
  if (local_70[0] == '\0') {
    if (DAT_102310958 == (void *)0x0) {
      pvVar4 = operator_new(0x18);
      FUN_100612690(pvVar4);
      DAT_102271170 = 1;
      DAT_102310958 = pvVar4;
    }
    pvVar4 = DAT_102310958;
    uVar2 = FUN_100152280();
    uVar2 = FUN_100154790(uVar2,0);
    FUN_10015a2b0(&local_80,uVar2);
    local_b8 = (int *)0x0;
    uStack_b0 = 0;
    local_a0 = 0;
    local_a8 = 0;
    local_90 = 0x80000000;
    local_98.field7 = 0;
    local_88 = 1;
    FUN_10060a8b0(*(undefined8 *)((long)pvVar4 + 0x10),1,&local_80,&local_b8);
    FUN_10060b4b0(*(undefined8 *)((long)pvVar4 + 0x10),1,&local_80,0);
    QVariant::~QVariant((QVariant *)&local_98);
    if (local_b8 != (int *)0x0) {
      LOCK();
      *local_b8 = *local_b8 + -1;
      local_29 = *local_b8 != 0;
      UNLOCK();
      if ((!(bool)local_29) && (local_b8 != (int *)0x0)) {
        operator_delete(local_b8);
      }
    }
    if (*(int *)local_80 == -1) {
      return;
    }
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      UNLOCK();
      if (*(int *)local_80 != 0) {
        return;
      }
      local_29 = 0;
    }
    QArrayData::deallocate(local_80,2,8);
    return;
  }
LAB_1006086a7:
  FUN_1006291f0(local_c0,param_1,param_2);
  QDesktopServices::openUrl(local_c0);
  QUrl::~QUrl(local_c0);
  return;
}


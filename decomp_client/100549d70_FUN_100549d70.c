
QIcon * FUN_100549d70(QIcon *param_1,long param_2,int *param_3,int param_4)

{
  int iVar1;
  char cVar2;
  long lVar3;
  QString QVar4;
  QSize local_48;
  QIcon local_40 [8];
  QString local_38;
  QString local_30;
  QString local_28;
  undefined1 local_19;
  
  if (*(long *)(*(long *)(param_2 + 0x20) + 0x10 +
               ((long)*param_3 + (long)*(int *)(*(long *)(param_2 + 0x20) + 8)) * 8) == 0) {
LAB_100549eb2:
    *(undefined4 *)(param_1 + 8) = 0x80000000;
    *(undefined8 *)param_1 = 0;
    return param_1;
  }
  if (param_4 == 0xd) {
    local_48.field0_0x0 = 0;
    local_48.field1_0x4 = 0x29;
    QVariant::QVariant((QVariant *)param_1,&local_48);
    return param_1;
  }
  if (param_4 != 1) {
    if (param_4 == 0) {
      CVirtualNetwork::getNetworkID();
      QVariant::QVariant((QVariant *)param_1,&local_38);
      if (*(int *)local_38.field0_0x0 == -1) {
        return param_1;
      }
      if (*(int *)local_38.field0_0x0 != 0) {
        LOCK();
        *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
        UNLOCK();
        if (*(int *)local_38.field0_0x0 != 0) {
          return param_1;
        }
        local_19 = 0;
      }
      QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
      return param_1;
    }
    goto LAB_100549eb2;
  }
  lVar3 = CVirtualNetwork::getHostOnlyNetwork();
  if (((lVar3 == 0) || (lVar3 = CHostOnlyNetwork::getParallelsAdapter(), lVar3 == 0)) ||
     (lVar3 = CHostOnlyNetwork::getNATServer(), lVar3 == 0)) {
    QIcon::QIcon(local_40);
    goto LAB_100549ecc;
  }
  cVar2 = CNATServer::isEnabled();
  if (cVar2 == '\0') {
    local_30.field0_0x0 =
         (QTypedArrayData<unsigned_short> *)
         QString::fromAscii_helper(":/Images/network_host_only.png",0x1e);
    QIcon::QIcon(local_40,&local_30);
    if (*(int *)local_30.field0_0x0 == -1) goto LAB_100549ecc;
    QVar4.field0_0x0 = local_30.field0_0x0;
    if (*(int *)local_30.field0_0x0 != 0) {
      LOCK();
      *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
      iVar1 = *(int *)local_30.field0_0x0;
      UNLOCK();
      goto joined_r0x000100549f2a;
    }
  }
  else {
    local_28.field0_0x0 =
         (QTypedArrayData<unsigned_short> *)
         QString::fromAscii_helper(":/Images/network_shared.png",0x1b);
    QIcon::QIcon(local_40,&local_28);
    if (*(int *)local_28.field0_0x0 == -1) goto LAB_100549ecc;
    QVar4.field0_0x0 = local_28.field0_0x0;
    if (*(int *)local_28.field0_0x0 != 0) {
      LOCK();
      *(int *)local_28.field0_0x0 = *(int *)local_28.field0_0x0 + -1;
      iVar1 = *(int *)local_28.field0_0x0;
      UNLOCK();
joined_r0x000100549f2a:
      local_19 = iVar1 != 0;
      if ((bool)local_19) goto LAB_100549ecc;
    }
  }
  QArrayData::deallocate((QArrayData *)QVar4.field0_0x0,2,8);
LAB_100549ecc:
  QIcon::operator_cast_to_QVariant(param_1);
  QIcon::~QIcon(local_40);
  return param_1;
}


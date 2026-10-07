
/* CXmlUsbHelper::IsUsbVirtualDevice(CVmUsbDevice const*) */

undefined1 CXmlUsbHelper::IsUsbVirtualDevice(CVmUsbDevice *param_1)

{
  undefined1 uVar1;
  QArrayData *local_28;
  QArrayData *local_20;
  undefined1 local_11;
  
  CVmDevice::getSystemName();
  local_28 = (QArrayData *)QString::fromAscii_helper("VIRTUAL@",8);
  uVar1 = QString::startsWith(&local_20,&local_28,1);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_11 = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_100023d41;
    }
    QArrayData::deallocate(local_28,2,8);
  }
LAB_100023d41:
  if (*(int *)local_20 != -1) {
    if (*(int *)local_20 != 0) {
      LOCK();
      *(int *)local_20 = *(int *)local_20 + -1;
      UNLOCK();
      if (*(int *)local_20 != 0) {
        return uVar1;
      }
      local_11 = 0;
    }
    QArrayData::deallocate(local_20,2,8);
  }
  return uVar1;
}


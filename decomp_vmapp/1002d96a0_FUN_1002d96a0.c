
bool FUN_1002d96a0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_1 + 8) + 0x10);
  if (lVar1 == 0) {
    FUN_1008e3970("","USB",0,"ASSERT( %s ) occured in %s:%d [%s]","m_pUsbDev->m_pSoftUsb != NULL",
                  "../Usb/PlatformEndPoint_soft.cpp",0x2a,"Init");
    lVar1 = *(long *)(*(long *)(param_1 + 8) + 0x10);
  }
  return lVar1 != 0;
}


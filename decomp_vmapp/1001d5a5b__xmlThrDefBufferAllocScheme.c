
xmlBufferAllocationScheme _xmlThrDefBufferAllocScheme(xmlBufferAllocationScheme v)

{
  xmlBufferAllocationScheme xVar1;
  
  _xmlMutexLock(DAT_1011b8728);
  xVar1 = DAT_101111354;
  DAT_101111354 = v;
  _xmlMutexUnlock(DAT_1011b8728);
  return xVar1;
}


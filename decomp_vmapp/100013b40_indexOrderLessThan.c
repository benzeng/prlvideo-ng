
/* CXmlModelHelper::indexOrderLessThan(CVmDevice const*, CVmDevice const*) */

bool CXmlModelHelper::indexOrderLessThan(CVmDevice *param_1,CVmDevice *param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = CVmDevice::getIndex();
  uVar2 = CVmDevice::getIndex();
  return uVar1 < uVar2;
}


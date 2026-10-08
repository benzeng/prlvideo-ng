
/* Function Stack Size: 0x10 bytes */

ID PDSharedFoldersBarButtonItem::_cxx_construct(ID param_1,SEL param_2)

{
  long lVar1;
  
  lVar1 = _vmDeviceUsedChangeBinding;
  *(undefined8 *)(param_1 + 8 + _vmDeviceUsedChangeBinding) = 0;
  *(undefined8 *)(param_1 + lVar1) = 0;
  lVar1 = _vmConfigurationChangeBinding;
  *(undefined8 *)(param_1 + 8 + _vmConfigurationChangeBinding) = 0;
  *(undefined8 *)(param_1 + lVar1) = 0;
  lVar1 = _sfMenu;
  *(undefined8 *)(param_1 + 8 + _sfMenu) = 0;
  *(undefined8 *)(param_1 + lVar1) = 0;
  return param_1;
}


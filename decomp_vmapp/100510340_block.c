
/* Function Stack Size: 0x10 bytes */

ID DeallocHook::block(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = _objc_getProperty(param_1,param_2,_block,0);
  return IVar1;
}


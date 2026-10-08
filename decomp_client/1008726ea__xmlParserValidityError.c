
void _xmlParserValidityError(void *ctx,char *msg,...)

{
  byte in_AL;
  
                    /* WARNING: Could not recover jumptable at 0x000100872752. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&LAB_100872774 + (ulong)in_AL * -4))(ctx,msg,&LAB_100872774 + (ulong)in_AL * -4);
  return;
}


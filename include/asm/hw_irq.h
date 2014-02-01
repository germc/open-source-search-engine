/* All asm/ files are generated and point to the corresponding
 * file in asm-i486 or asm-x86_64.
 */

#ifdef __x86_64__
# include <asm-x86_64/hw_irq.h>
#else
# include <asm-i486/hw_irq.h>
#endif

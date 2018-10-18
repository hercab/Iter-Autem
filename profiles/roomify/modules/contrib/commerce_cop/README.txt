Commerce Custom Offline Payments

Solution for offline payments for Drupal Commerce.
This module might be a single replacement for all these modules:
 - Commerce Bank Transfer *** (https://drupal.org/project/commerce_bank_transfer)
 - Commerce Cash on Delivery *** (https://drupal.org/project/commerce_cod)
 - Commerce Cheque *** (https://drupal.org/project/commerce_cheque)
 - Commerce Credit card on Delivery *** (https://drupal.org/project/commerce_cod)
 - Commerce pay in person *** (https://drupal.org/project/commerce_pay_in_person)
*** Important: There are submodules (Features) in the package built which could used as they are,
as replacements of these modules.
The contributed module should be disabled and the corresponding features enabled.
These prebuilt offline Payments/features could be used also as examples for new custom Commerce offline payments.

How it works
 - Store administrators can create custom DISTINCT offline payments.
 Administration > Store > Configuration >Manage custom offline payments (admin/commerce/config/custom-offline-payments)
 - For every custom offline payment the store administrator can set the Title (& id),
 description of the payment method and also an information that could be used for payment option information.
 - The custom offline payments will automatically added as payment method, disabled or enabled,
 based on their status property.
 - With every custom offline payment defined the store administrators can create new Payment method Rules.
 - Features integration - The custom offline payments can be used as Features.
 - Drupal Commerce Payment Transaction Fields integration - Define fieldable payment to build extra data.
 Implementation issue : #2220197, https://www.drupal.org/node/2220197


Credits
Developed & sponsored by Commerce Guys (http://www.commerceguys.com).

Initially developed & sponsored by Commerce Guys & i-KOS (http://www.i-kos.com).

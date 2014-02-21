/*
 Copyright © Roman Zechmeister, 2014
 
 Diese Datei ist Teil von GPG Keychain Access.
 
 GPG Keychain Access ist freie Software. Sie können es unter den Bedingungen 
 der GNU General Public License, wie von der Free Software Foundation 
 veröffentlicht, weitergeben und/oder modifizieren, entweder gemäß 
 Version 3 der Lizenz oder (nach Ihrer Option) jeder späteren Version.
 
 Die Veröffentlichung von GPG Keychain Access erfolgt in der Hoffnung, daß es Ihnen 
 von Nutzen sein wird, aber ohne irgendeine Garantie, sogar ohne die implizite 
 Garantie der Marktreife oder der Verwendbarkeit für einen bestimmten Zweck. 
 Details finden Sie in der GNU General Public License.
 
 Sie sollten ein Exemplar der GNU General Public License zusammen mit diesem 
 Programm erhalten haben. Falls nicht, siehe <http://www.gnu.org/licenses/>.
*/

#import "Globales.h"


@interface ActionController ()
@property (retain) NSString *progressText, *errorText;
- (void)receiveKeysFromServer:(NSObject <EnumerationList> *)keys;
- (NSString *)importResultWithStatusDict:(NSDictionary *)statusDict;
- (NSString *)descriptionForKeys:(NSObject <EnumerationList> *)keys withOptions:(NSUInteger)options;
@end

enum {
	NoAction = 0,
	ShowResultAction,
	ShowFoundKeysAction,
	SaveDataToURLAction,
	UploadKeyAction,
	SetPrimaryUserIDAction
};

enum {
	ImportOperation = 1
};

